# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(
	${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE SOURCE_FILES src/*.c)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.1.1)
set(toolchainVersion 14_2_Rel1)
set(picotoolVersion 2.1.1)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico_w CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(prueba-umbra-1 C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()
include_directories(
	${CMAKE_SOURCE_DIR}/utils)

# Add executable. Default name is the project name, version 0.1

add_executable(prueba-umbra-1 prueba-umbra-1.cpp ${SOURCE_FILES})

pico_set_program_name(prueba-umbra-1 "prueba-umbra-1")
pico_set_program_version(prueba-umbra-1 "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(prueba-umbra-1 0)
pico_enable_stdio_usb(prueba-umbra-1 0)

# Add the standard library to the build
target_link_libraries(prueba-umbra-1
        pico_stdlib
        hardware_pwm
        pico_lwip_core)

# Add the standard include files to the build
target_include_directories(prueba-umbra-1 PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/include
)
link_directories(
        ${CMAKE_CURRENT_LIST_DIR}/include
)

# Add any user requested libraries
target_link_libraries(prueba-umbra-1 
        
        )

pico_add_extra_outputs(prueba-umbra-1)

