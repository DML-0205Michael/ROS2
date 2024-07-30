set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)

# 设置C和C++编译器路径
set(CMAKE_C_COMPILER /usr/bin/arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER /usr/bin/arm-linux-gnueabihf-g++)

# 设置编译标志
set(CMAKE_C_FLAGS_INIT "-march=armv8-a -mfpu=neon-fp-armv8 -mfloat-abi=hard" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS_INIT "-march=armv8-a -mfpu=neon-fp-armv8 -mfloat-abi=hard" CACHE STRING "" FORCE)

set(CMAKE_EXE_LINKER_FLAGS_INIT "-static" CACHE STRING "" FORCE)

# 设置链接器和库路径
set(CMAKE_FIND_ROOT_PATH /usr/arm-linux-gnueabihf)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

set(CMAKE_CROSSCOMPILING 1)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
