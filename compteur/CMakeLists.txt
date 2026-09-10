cmake_minimum_required(VERSION 3.16)

project(compteur LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(compteur main.cpp
    compteur.h compteur.cpp)

include(GNUInstallDirs)
install(TARGETS compteur
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
