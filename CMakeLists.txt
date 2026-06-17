# Set the minimum required version of CMake
cmake_minimum_required(VERSION 4.0)

project(Connect4 VERSION 1.0.0 LANGUAGES CXX)

# Set the C++ standard to C++17, enforce it, and disable compiler-specific extensions --> should always be used
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

# Add an executable target named 'connect4' using all .cpp files in the current directory
add_executable(connect4 
    app/main.cpp
    ${SOURCES}
)

target_include_directories(connect4 PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)

# Link the library to the executable target
#target_link_libraries(connect4 PRIVATE connect4_lib)
