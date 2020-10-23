cmake_minimum_required(VERSION 3.17)
project(Blinky)

#set(QP_PORT_DIR ports/posix-qv)
set(QP_PORT_DIR ports/posix)

set(QPCPP_COMPILE_DEFINITIONS QP_API_VERSION=9999)
set(QPCPP_COMPILE_OPTIONS -fno-pie -fno-rtti -fno-exceptions)
set(QPCPP_LINK_OPTIONS -no-pie)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(../../.. qpcpp)

add_executable(blinky)
target_include_directories(blinky PRIVATE "")
target_sources(blinky PRIVATE blinky.cpp)
target_link_libraries(blinky PRIVATE qpc++)
