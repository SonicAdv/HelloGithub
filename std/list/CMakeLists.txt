CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(LIST)

SET(CMAKE_CXX_FLAGS "-std=c++11 -O2")

INCLUDE_DIRECTORIES(
    "./include"
)
AUX_SOURCE_DIRECTORY(
    src
    SRC_PATH
)

ADD_EXECUTABLE(
    listandmore
    ${SRC_PATH}
)

