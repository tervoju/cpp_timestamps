cmake_minimum_required(VERSION 3.0.0)
project(test_api VERSION 0.1.0)

include(CTest)
enable_testing()

#set(APIX_LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/apix/220415/lib/linux-x64/ )
#set(APIX_HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/apix/220415/include)
#set(APIX_HEADER_FILES ${APIX_HEADER_DIR}/sr_api.h ${APIX_HEADER_DIR}/sr_defines.h)
#set(OPENCV_HEADER_DIR /usr/include/opencv4)
#set(OPENCV_HEADER_FILES ${OPENCV_HEADER_DIR}/opencv.hpp ${OPENCV_HEADER_DIR}/opencv_modules.hpp)
#set(JSON_HEADER_DIR /usr/include/jsoncpp/)
#set(CMAKE_EXE_LINKER_FLAGS_INIT "-ljsoncpp")

#find_package(CURL REQUIRED)

#include_directories(${APIX_HEADER_DIR} ${OPENCV_HEADER_DIR} ${CMAKE_CURRENT_SOURCE_DIR} ${JSON_HEADER_DIR} ${CURL_INCLUDE_DIR})

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_executable(test_timestamp test_timestamp.cpp ${CMAKE_CURRENT_SOURCE_DIR})

#target_link_libraries(createpc ${APIX_LIB_DIR}libsr_api.so ${CURL_LIBRARIES} ${CMAKE_EXE_LINKER_FLAGS_INIT})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)