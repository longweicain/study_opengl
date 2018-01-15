# CMake最低版本要求
cmake_minimum_required (VERSION 2.7)

#项目信息
project (Study_OpenglES)

#包含头文件
include_directories(${PROJECT_SOURCE_DIR}/include)

#工程gourp显示
file(GLOB_RECURSE INCLUDE_FILES
        RELATIVE ${PRJOJECT_SOURCE_DIR}
	include/*.h)

set(MAIN_DIR src/main)
file(GLOB_RECURSE MAIN_FILES
         RELATIVE ${PROJECT_SOURCE_DIR}
         ${MAIN_DIR}/*.cpp
         ${MAIN_DIR}/*.c
	 ${MAIN_DIR}/*.h)

 set(HELLO_TRIANGLE_DIR src/hello_triangle)
 file(GLOB_RECURSE HELLO_TRIANGLE_FILES
         RELATIVE ${PROJECT_SOURCE_DIR}
         ${AUTO_DIR}/*.cpp
	 ${AUTO_DIR}/*.c
         ${AUTO_DIR}/*.h)

source_group("include" FILES ${INCLUDE_FIELS})
source_group("src\\main" FILES ${MAIN_FILES})
source_group("src\\hello_triangle" FILES ${HELLO_TRIANGLE_FILES})

set(ALL_FILES ${INCLUDE_FIELS}
              ${MAIN_FILES}
	      ${HELLO_TRIANGLE_FILES})

#指定生成目标
add_executable(StudyCPP11 ${ALL_FILES})

