cmake_minimum_required(VERSION 3.26)
project(curs_OOP)

set(CMAKE_CXX_STANDARD 17)

add_executable(curs_OOP main.cpp
        include/include.h
        libs/human/human.cpp
        libs/human/human.h
        libs/bio/name/name.cpp
        libs/bio/name/name.h
        libs/date/date.cpp
        libs/date/date.h
        libs/bio/date/date_of_birth/dateBirth.cpp
        libs/bio/date/date_of_birth/dateBirth.h
        libs/bio/date/date_registration/dateRegistration.cpp
        libs/bio/date/date_registration/dateRegistration.h
        libs/bio/bio_include.h
        libs/bio/date/include.h
        libs/bio/biometric.cpp
        libs/bio/biometric.h)
