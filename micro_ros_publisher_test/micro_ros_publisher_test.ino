// ======================== ROS2 ========================//
#include <micro_ros_arduino.h>

#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <geometry_msgs/msg/twist.h>
#include <sensor_msgs/msg/imu.h>

geometry_msgs__msg__Twist twist_msg;
sensor_msgs__msg__Imu imu_msg;

// #include <std_msgs/msg/int32.h>

// #include <msg_pkg/msg/from_arduino_msg.h>
// #include <msg_pkg/msg/to_arduino_msg.h>
// msg_pkg__msg__FromArduinoMsg from_ard_msg;
// msg_pkg__msg__ToArduinoMsg to_ard_msg;

rcl_publisher_t publisher;
rcl_subscription_t subscriber;
// std_msgs__msg__Int32 msg;

rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t timer;

rclc_executor_t executor2;
rcl_allocator_t allocator2;

#define LED_PIN 2

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

const double meter_per_count_L=0.000294310812850564; 
const double meter_per_count_R=0.000294132201307244;
float x, y, th;
// ======================== ROS2 ========================//
// ======================== MPU6050 ========================//
#include "I2Cdev.h"
#include "MPU6050.h"
#if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
    #include "Wire.h"
#endif
MPU6050 accelgyro;
int16_t gx, gy, gz;
// ======================== MPU6050 ========================//
// ======================== Encoder ========================//
#define enc_1A_pin 39
#define enc_1B_pin 34

#define enc_2A_pin 35
#define enc_2B_pin 32

long count_1=0, count_2=0; 
int enc_1_speed=0, enc_2_speed=0;
long enc_1_dist, enc_2_dist;
// ======================== Encoder ========================//
//=============================================MOTOR=============================================//
#define M1A_pin 18 // B6
#define M1A_PWM_CH 0
#define M1A_PWM_res 12 // PWM value: 0-4096
#define M1A_PWM_freq 10000

#define M1B_pin 4 // B7
#define M1B_PWM_CH 1
#define M1B_PWM_res 12 // PWM value: 0-4096
#define M1B_PWM_freq 10000

#define M2A_pin 17 // B8
#define M2A_PWM_CH 2
#define M2A_PWM_res 12 // PWM value: 0-4096
#define M2A_PWM_freq 10000

#define M2B_pin 16 // B9
#define M2B_PWM_CH 3
#define M2B_PWM_res 12 // PWM value: 0-4096
#define M2B_PWM_freq 10000

int M1_speed=0, M2_speed=0; // 0~+-4096
int M1_speed_target, M2_speed_target; // encoder needed count in 20ms
int M1_speed_target_pre, M2_speed_target_pre;
//=============================================MOTOR=============================================//
//=============================================Bluetooth=============================================//
#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;
int BT_input_yaw, BT_input_pitch;
char data_in;
int control_switch; // 30-115: BT; 115-200: ROS
int update_interval=50; // time interval in ms for updating panel indicators
unsigned long last_time=0;
int dt=0;
//=============================================Bluetooth=============================================//
//=============================================Control=============================================//
float KP_yaw=0.1, KD_yaw=0;
float KP_speed=60, KI_speed=10; // enc speed about 80 ct/20ms, 1.1m/s, pwm should be around 4000
int err_sum_1=0,err_sum_2=0;
int target_yaw_speed=0,yaw_PD_output;
int M1_PI_ouput, M2_PI_ouput;
//=============================================Control=============================================//


void error_loop(){
  // while(1){
  //   digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  //   delay(1000);
  // }
}

// void timer_callback(rcl_timer_t * timer, int64_t last_call_time){  
//   RCLC_UNUSED(last_call_time);
//   if (timer != NULL) {
//     read_mpu6050_yaw_loop();
//     RCSOFTCHECK(rcl_publish(&publisher, &imu_msg, NULL));// publish message
//   }
// }

void subscription_callback(const void *msgin) {
  const geometry_msgs__msg__Twist *msg = (const geometry_msgs__msg__Twist *)msgin;
  // if ((fabs(msg->linear.x) > 0) || (fabs(msg->angular.z) > 0)) {
  //   //digitalWrite(LED_PIN, HIGH);
  // } else {
  //   digitalWrite(LED_PIN, LOW);
  // }
  float vx=msg->linear.x;
  float vth=msg->angular.z;
  
  const double R=0.078;
  double v_R=vx-vth*R; // right wheel speed, m/s, m/1000ms
  double v_L=vx+vth*R; // left wheel speed, m/s, m/1000ms
    
  int enc1_count_per_20ms=v_R/meter_per_count_R/50;
  int enc2_count_per_20ms=v_L/meter_per_count_L/50;
  
  M1_speed_target_pre=M1_speed_target;
  M2_speed_target_pre=M2_speed_target;
  M1_speed_target=enc1_count_per_20ms/2+M1_speed_target_pre/2;
  M2_speed_target=enc2_count_per_20ms/2+M2_speed_target_pre/2;

}

void setup() {
  Serial.begin(460800);
  SerialBT.begin(460800);
  ros2_setup();
  build_panel();
  MPU6050_setup();
  encoder_setup();
  motor_output_setup();
  digitalWrite(LED_PIN, LOW); 
}

void loop() {
  // timer_callback() 20 ms/loop, get imu and encoder data, and publish

  receive_data_loop();
  send_data();
  
  ros2_loop(); // spin
  
  time_holder_loop();
  encoder_data_loop();
  read_mpu6050_yaw_loop();
  RCSOFTCHECK(rcl_publish(&publisher, &imu_msg, NULL));// publish message

  control_loop();
  
  motor_output_loop();

  
}


// ======================== ROS ========================//
void ros2_setup(){
  // Serial.begin(115200);
  set_microros_transports();
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);  
  
  delay(2000);

  allocator = rcl_get_default_allocator();

  //create init_options
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

  // create node
  RCCHECK(rclc_node_init_default(&node, "micro_ros_arduino_node", "", &support));

  // create publisher
  RCCHECK(rclc_publisher_init_default(
    &publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu),
    "micro_ros_arduino_node_publisher")); // topic name
  
  // create subscriber
  RCCHECK(rclc_subscription_init_default(
    &subscriber,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
    "cmd_vel"));

  // 自定义消息搞不出来一点，报错只会迭代，教程永远过时，官方教程永远跳步，CNM
  // RCCHECK(rclc_publisher_init_default(
  //   &publisher,
  //   &node,
  //   ROSIDL_GET_MSG_TYPE_SUPPORT(msg_pkg, msg, FromArduinoMsg), // msg package, msg (folder name), msg type
  //   "micro_ros_arduino_node_publisher")); // topic name

  //create timer,不好使，别用，用了只能发布，一订阅就报错
  // const unsigned int timer_timeout = 20;
  // RCCHECK(rclc_timer_init_default(
  //   &timer,
  //   &support,
  //   RCL_MS_TO_NS(timer_timeout),
  //   timer_callback));

  // create executor
  RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
  //RCCHECK(rclc_executor_add_timer(&executor, &timer));
  
  // create executor
  //RCCHECK(rclc_executor_init(&executor2, &support.context, 1, &allocator2));
  RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &twist_msg, &subscription_callback, ON_NEW_DATA));

}

void ros2_loop(){
  RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(0)));// delay time
}

// ======================== ROS ========================//
// ======================== IMU ========================//
void MPU6050_setup(){
    #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
        Wire.begin();
    #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
        Fastwire::setup(400, true);
    #endif

    // initialize device
    // Serial.println("Initializing I2C devices...");
    accelgyro.initialize();
    // verify connection
    // Serial.println("Testing device connections...");
    // Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");
  if (accelgyro.testConnection()){
    digitalWrite(2,HIGH);delay(20);digitalWrite(2,LOW);delay(20);
    digitalWrite(2,HIGH);delay(20);digitalWrite(2,LOW);delay(20);
    digitalWrite(2,HIGH);delay(20);digitalWrite(2,LOW);delay(20);
    digitalWrite(2,HIGH);delay(20);digitalWrite(2,LOW);delay(20);
  } else {
    digitalWrite(2,HIGH);delay(200);digitalWrite(2,LOW);delay(200);
    digitalWrite(2,HIGH);delay(200);digitalWrite(2,LOW);delay(200);
    digitalWrite(2,HIGH);delay(200);digitalWrite(2,LOW);delay(200);
    digitalWrite(2,HIGH);delay(200);digitalWrite(2,LOW);delay(200);
  }
}

void read_mpu6050_yaw_loop(){ // called in timer_callback
  accelgyro.getRotation(&gx, &gy, &gz);
  
  imu_msg.header.frame_id.data = "mpu6050_imu";

  // imu_msg.linear_acceleration.x = 233.1;
  // imu_msg.linear_acceleration.y = 0.0;
  // imu_msg.linear_acceleration.z = 0.0;

  // imu_msg.angular_velocity.x = enc_1_speed;
  // imu_msg.angular_velocity.y = enc_2_speed;
  // imu_msg.angular_velocity.z = float(gz);


  float R_speed=enc_1_speed*meter_per_count_R; // m/20ms
  float L_speed=enc_2_speed*meter_per_count_L; // m/20ms
  float vx=(L_speed+R_speed)/2;
  if (enc_1_speed==0 && enc_2_speed==0) gz=0;

  float vth=float(gz)/131/180*M_PI; // rad/s

  x=x+vx*cos(th); // m += m/20ms
  y=y+vx*sin(th);
  th=th+vth*0.02; // rad += rad/20ms

  imu_msg.angular_velocity.x = x;
  imu_msg.angular_velocity.y = y;
  imu_msg.angular_velocity.z = th;


  // imu_msg.orientation.x = 0.0;
  // imu_msg.orientation.y = 0.0;
  // imu_msg.orientation.z = 0.0;
  // imu_msg.orientation.w = 1.0;
}
// ======================== IMU ========================//
// ======================== Encoder ========================//
void encoder_data_loop(){ // called in read_mpu6050_loop
  if (count_2==0) count_1=0;
  
  enc_1_speed=constrain(count_1,-90,90);
  enc_2_speed=constrain(count_2,-90,90);
  // if (count_1!=0) digitalWrite(2,HIGH-digitalRead(2));
  // enc_1_dist+=count_1;
  // enc_2_dist+=count_2;
  count_1=0;
  count_2=0;
}

void encoder_setup(){
  pinMode(0,OUTPUT); digitalWrite(0,0);
  pinMode(4,OUTPUT); digitalWrite(4,0);
  pinMode(17,OUTPUT); digitalWrite(17,0);
  pinMode(16,OUTPUT); digitalWrite(16,0);

  pinMode(enc_1A_pin, INPUT_PULLUP);
  pinMode(enc_1B_pin, INPUT_PULLUP);
  pinMode(enc_2A_pin, INPUT_PULLUP);
  pinMode(enc_2B_pin, INPUT_PULLUP);

  attachInterrupt(enc_1A_pin,enc_1_A,CHANGE);
  attachInterrupt(enc_1B_pin,enc_1_B,CHANGE);
  attachInterrupt(enc_2A_pin,enc_2_A,CHANGE);
  attachInterrupt(enc_2B_pin,enc_2_B,CHANGE);
}

void enc_1_A(){
  if (digitalRead(enc_1A_pin) == digitalRead(enc_1B_pin)) count_1--;  
  else count_1++;
  // // Serial.print("M1 count: ");
  // // Serial.println(count_1);
}

void enc_1_B(){
  if (digitalRead(enc_1A_pin) == digitalRead(enc_1B_pin)) count_1++;  
  else count_1--;
  // // Serial.print("M1 count: ");
  // // Serial.println(count_1);
}

void enc_2_A(){
  if (digitalRead(enc_2A_pin) == digitalRead(enc_2B_pin)) count_2--;
  else count_2++;
  // // Serial.print("M2 count: ");
  // // Serial.println(count_2);
}

void enc_2_B(){
  if (digitalRead(enc_2A_pin) == digitalRead(enc_2B_pin)) count_2++;
  else count_2--;
  // // Serial.print("M2 count: ");
  // // Serial.println(count_2);
}
// ======================== Encoder ========================//
// ======================== Motor ========================//
void motor_output_setup(){
  ledcAttachPin(M1A_pin,M1A_PWM_CH);
  ledcSetup(M1A_PWM_CH,M1A_PWM_freq,M1A_PWM_res);

  ledcAttachPin(M1B_pin,M1B_PWM_CH);
  ledcSetup(M1B_PWM_CH,M1B_PWM_freq,M1B_PWM_res);

  ledcAttachPin(M2A_pin,M2A_PWM_CH);
  ledcSetup(M2A_PWM_CH,M2A_PWM_freq,M2A_PWM_res);

  ledcAttachPin(M2B_pin,M2B_PWM_CH);
  ledcSetup(M2B_PWM_CH,M2B_PWM_freq,M2B_PWM_res);
}

void motor_output_loop(){
  // Serial.print(BT_input_pitch);// Serial.print("\t");
  // Serial.print(yaw_PD_output);// Serial.print("\t");
  // Serial.print(M1_speed);// Serial.print("\t");

  if (M1_speed>0){
    ledcWrite(M1A_PWM_CH, abs(M1_speed));
    ledcWrite(M1B_PWM_CH, 0);
  } else if (M1_speed<=0){
    ledcWrite(M1A_PWM_CH, 0);
    ledcWrite(M1B_PWM_CH, abs(M1_speed));
  }

  if (M2_speed>0){
    // // Serial.print("M2 +Write");
    ledcWrite(M2A_PWM_CH, abs(M2_speed));
    ledcWrite(M2B_PWM_CH, 0);
  } else if (M2_speed<=0){
    // // Serial.print("M2 -Write");
    ledcWrite(M2A_PWM_CH, 0);
    ledcWrite(M2B_PWM_CH, abs(M2_speed));
  }
}
// ======================== Motor ========================//
//=============================================Bluetooth=============================================//
void build_panel(){
  // Build panel in app
  SerialBT.println("*.kwl");
  SerialBT.println("clear_panel()");
  SerialBT.println("set_grid_size(12,9)");
  SerialBT.println("add_text_box(2,3,2,L,0,245,240,245,F)");
  SerialBT.println("add_text_box(8,3,2,L,0,245,240,245,G)");
  SerialBT.println("add_text_box(1,0,3,L,120955,245,240,245,H)");
  SerialBT.println("add_text_box(4,0,3,L,0,245,240,245,I)");
  SerialBT.println("add_slider(1,9,3,0,100,0,A,A,0)");
  SerialBT.println("add_slider(8,8,2,30,200,189,R,,0)");
  SerialBT.println("add_slider(0,4,4,0,100,0,S,,0)");
  SerialBT.println("add_slider(1,8,2,30,200,73,L,,0)");
  SerialBT.println("add_free_pad(1,5,-255,255,0,0,W,W)");
  SerialBT.println("add_free_pad(8,5,-255,255,0,0,P,P)");
  SerialBT.println("add_gauge(6,2,4,0,100,100,g,,,10,5)");
  SerialBT.println("add_gauge(0,2,4,0,100,0,f,,,10,5)");
  SerialBT.println("add_gauge(3,1,4,0,100,100,h,,,10,5)");
  SerialBT.println("add_send_box(4,4,5,S50,,)");
  SerialBT.println("set_panel_notes(-,,,)");
  SerialBT.println("run()");
  SerialBT.println("*");
}

void receive_data_loop(){
  if (SerialBT.available()){
    //digitalWrite(2,HIGH); 
    data_in=SerialBT.read();  //Get next character

    if(data_in=='L'){ //  Slider
      control_switch=SerialBT.parseInt();
    }

    if(data_in=='M'){ //  Slider
      ESP.restart();
    }
    

    // if(data_in=='R'){ //  Slider
    //   pitch_roll_sen=SerialBT.parseInt();
    // }

    // Left joy, yaw
    if(data_in=='W'){ //  yaw
      while(true){
        if (SerialBT.available()){
          data_in=SerialBT.read();  //Get next character
          if(data_in=='X') BT_input_yaw=-SerialBT.parseInt();
          if(data_in=='W') break; // exit loop
        }
      }
    } 

    // Right joy, roll and pitch
    if(data_in=='P'){ //  Pad Start Text
      while(true){
        if (SerialBT.available()){
          data_in=SerialBT.read();  //Get next character
          //if(data_in=='X') roll=SerialBT.parseInt();
          if(data_in=='Y') {
            int pitch=-SerialBT.parseInt();
            BT_input_pitch=map(pitch,-255,255,-1600,1600);
          }
          if(data_in=='P') break; // End character
        }
      }
    } 

  } 

  target_yaw_speed=map(BT_input_yaw,-255,255,-32000,32000);
  if (control_switch>115){
    BT_input_pitch=0;
  }
}

void send_data(){
  // unsigned long t=millis();
  // if ((t-last_time)>update_interval){
  //   last_time=t;
    SerialBT.print("*F"+String(enc_1_speed)+"*");
    SerialBT.print("*G"+String(enc_2_speed)+"*");
    SerialBT.print("*H"+String(M1_speed_target)+"*");
    SerialBT.print("*I"+String(M2_speed_target)+"*");
    SerialBT.print("*V"+String(dt)+"*");
    // SerialBT.print("*I"+String(gz)+"*");
  // }
}
//=============================================Bluetooth=============================================//
//=============================================Control=============================================//
void control_loop(){
  int M1_fric=2200;
  int M2_fric=2200;
  int M1_speed_no_fric=0;
  int M2_speed_no_fric=0;
  
  if (control_switch<115){ // if BT control
    yaw_PD(target_yaw_speed,int(gz)-136);
    if (BT_input_pitch==0 && target_yaw_speed==0){
      M1_speed_no_fric=0;
      M2_speed_no_fric=0;
    } else {
      M1_speed_no_fric=BT_input_pitch-yaw_PD_output;
      M2_speed_no_fric=BT_input_pitch+yaw_PD_output;
    }   
    if (M1_speed_no_fric>0) M1_speed=M1_speed_no_fric+M1_fric;
    else if (M1_speed_no_fric<0) M1_speed=M1_speed_no_fric-M1_fric;
    else M1_speed=0;

    if (M2_speed_no_fric>0) M2_speed=M2_speed_no_fric+M2_fric;
    else if (M2_speed_no_fric<0) M2_speed=M2_speed_no_fric-M2_fric;
    else M2_speed=0;

  } else if (control_switch>115){ // ros control
    // int target_yaw_speed_ros=vth*180/M_PI*131;
    // yaw_PD(target_yaw_speed_ros,int(gz)-136);

    M1_speed_no_fric=M1_speed_PI(M1_speed_target,enc_1_speed); //-yaw_PD_output;

    M2_speed_no_fric=M2_speed_PI(M2_speed_target,enc_2_speed); //+yaw_PD_output;

    if (M1_speed_target==0) M1_speed=0;
    else M1_speed=M1_speed_no_fric;

    if (M2_speed_target==0) M2_speed=0;
    else M2_speed=M2_speed_no_fric;
  }
  

 

  M1_speed=constrain(M1_speed, -4096,4096);
  M2_speed=constrain(M2_speed, -4096,4096);

}

void yaw_PD(int target, int ang_speed){
  yaw_PD_output=int(KP_yaw*(ang_speed-target)+KD_yaw*ang_speed);
}

int M1_speed_PI(int target, int actual){
  int KI_out, KP_out;
  int err=target-actual; 
  if (target==0) err_sum_1=0;
  else {
    err_sum_1+=err;
    err_sum_1=constrain(err_sum_1,-20000,20000);
  }
  KI_out=err_sum_1*KI_speed;
  KP_out=err*KP_speed;
  return (KP_out+KI_out);
}

int M2_speed_PI(int target, int actual){
  int KI_out, KP_out;
  int err=target-actual; 
  if (target==0) err_sum_2=0;
  else {
    err_sum_2+=err;
    err_sum_2=constrain(err_sum_2,-20000,20000);
  }
  KI_out=err_sum_2*KI_speed;
  KP_out=err*KP_speed;
  return (KP_out+KI_out);
}
//=============================================Control=============================================//
//============================================= TIME =============================================//
unsigned long loop_start_time=0;
const int loop_time=20000; // micro seconds

void time_holder_loop(){
  if(micros() - loop_start_time > (loop_time+50)) {
    digitalWrite(2, HIGH);
  }
  else digitalWrite(2, LOW);

  while ((micros()- loop_start_time)<loop_time){} 
  // // Serial.print("dt:");// Serial.print(micros() - loop_start_time);// Serial.print("  ");
  dt=micros()-loop_start_time;
  loop_start_time = micros(); 
}
//============================================= TIME =============================================//