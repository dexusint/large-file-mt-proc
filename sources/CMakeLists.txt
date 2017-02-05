cmake_minimum_required (VERSION 3.2)

set (PROJECT fast-search)
project (${PROJECT} C CXX)

set (HEADERS 
	../headers/application.h
	)

set (SOURCES 
	../sources/application.cpp 
	../sources/main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -pthread")

include_directories (../headers)

source_group ("Header Files" FILES ${HEADERS})
source_group ("Source Files" FILES ${SOURCES})

add_executable (${PROJECT} ${HEADERS} ${SOURCES})

