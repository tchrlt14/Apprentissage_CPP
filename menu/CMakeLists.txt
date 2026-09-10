cmake_minimum_required(VERSION 3.16)

project(menu LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(menu main.cpp
    menu.h menu.cpp)

include(GNUInstallDirs)
install(TARGETS menu
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
