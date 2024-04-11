cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(bfloat16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(BFLOAT16_ROOT ${PROJECT_SOURCE_DIR})
set(BFLOAT16_SRCS_DIR "${BFLOAT16_ROOT}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

set(BFLOAT16_SRCS)
list(APPEND BFLOAT16_SRCS
    ${BFLOAT16_SRCS_DIR}/BFloat16.h
    ${BFLOAT16_SRCS_DIR}/BFloat16-inl.h
)

set(BFLOAT16_MAIN_SRC)
list(APPEND BFLOAT16_MAIN_SRC
    main.cpp
)

add_library(${PROJECT_NAME} SHARED ${BFLOAT16_SRCS})

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wno-unused-function)

target_include_directories(${PROJECT_NAME} PUBLIC ${BFLOAT16_SRCS_DIR})

add_executable(main ${BFLOAT16_MAIN_SRC})
target_link_libraries(main ${PROJECT_NAME})
