cmake_minimum_required(VERSION 3.15)

project(cpp_example CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
        endstone
        GIT_REPOSITORY https://github.com/theaddonn/endstone.git
        GIT_TAG patch-2 # or set to a specific version tag
)
FetchContent_MakeAvailable(endstone)

endstone_add_plugin(${PROJECT_NAME} src/motd_fix_plugin.cpp)
