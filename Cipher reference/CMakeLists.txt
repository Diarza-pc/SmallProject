cmake_minimum_required(VERSION 3.20)
project(Cipher_reference)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cipher_reference
        Main.cpp
        Dialogue/Dialogue.cpp
        Dialogue/Dialogue.h
        Randomizer/Randomizer.h
        Randomizer/Randomizer.cpp
)