# CMake 最低版本要求
cmake_minimum_required (VERSION 2.7)

message("started to create study opengles project")

#项目信息
project (study_opengles)


#平台信息
if(NOT DEFINED ${PLATFORM})
    set( PLATFORM $ENV{PLATFORM} CACHE STRING "PLATFORM TYPE")
	message("platform is: " ${PLATFORM})
	if(DEFINED _WINDOWS OR DEFINED WIN32)
		SET(PLATFORM "PLATFORM_WINDOWS")
	endif()
endif()

message("platform is: " ${PLATFORM})
add_definitions(-D${PLATFORM})



#包含头文件
include_directories(${PROJECT_SOURCE_DIR}/include/external)
include_directories(${PROJECT_SOURCE_DIR}/include/gles)


#工程group显示
file(GLOB_RECURSE INCLUDE_EXTERNAL_FIELS
         RELATIVE ${PROJECT_SOURCE_DIR}
		 include/external/*.h)
message("include files: " ${INCLUDE_FIELS})

file(GLOB_RECURSE INCLUDE_GLES_FIELS
         RELATIVE ${PROJECT_SOURCE_DIR}
		 include/gles/*.h)
message("include files: " ${INCLUDE_FIELS})

set(MAIN_DIR src/main)
message("main dir: " ${MAIN_DIR})
file(GLOB_RECURSE MAIN_FILES
         RELATIVE ${PROJECT_SOURCE_DIR}
         ${MAIN_DIR}/*.cpp
		 ${MAIN_DIR}/*.c
		 ${MAIN_DIR}/*.h)
message("main files: " ${MAIN_FILES})

set(HELLO_TRIANGLE_DIR src/hello_triangle)
message("hello triangle dir: " ${HELLO_TRIANGLE_DIR})
file(GLOB_RECURSE HELLO_TRIANGLE_FILES
         RELATIVE ${PROJECT_SOURCE_DIR}
         ${HELLO_TRIANGLE_DIR}/*.cpp
	     ${HELLO_TRIANGLE_DIR}/*.c
         ${HELLO_TRIANGLE_DIR}/*.h)
message("hello triangle files: " ${HELLO_TRIANGLE_FILES})

source_group("include\\external" FILES ${INCLUDE_EXTERNAL_FIELS})
source_group("include\\gles" FILES ${INCLUDE_GLES_FIELS})
source_group("src\\main" FILES ${MAIN_FILES})
source_group("src\\hello_triangle" FILES ${HELLO_TRIANGLE_FILES})

set(ALL_FILES ${INCLUDE_EXTERNAL_FIELS}
              ${INCLUDE_GLES_FIELS}
              ${MAIN_FILES}
	          ${HELLO_TRIANGLE_FILES})
message("all files: " ${ALL_FILES})
			  
#指定生成目标
add_executable(study_opengles ${ALL_FILES})
message("Finished to create study opengles project")

