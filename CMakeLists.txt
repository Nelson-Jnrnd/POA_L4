cmake_minimum_required(VERSION 3.21)
project(POA_L4)

set(CMAKE_CXX_STANDARD 17)

add_executable(POA_L4 src/main.cpp
        src/Roles/RoleVisitor.hpp

        src/Console/HumanoidDisplayer.cpp
        src/Console/HumanoidDisplayer.hpp
        src/Console/StreamField.cpp
        src/Console/StreamField.hpp

        src/Game/Position.cpp
        src/Game/Position.h
        src/Game/Field.cpp
        src/Game/Field.h

        src/Game/Humanoid.cpp
        src/Game/Humanoid.h
        src/Roles/Human.cpp
        src/Roles/Human.h
        src/Roles/Vampire.cpp
        src/Roles/Vampire.h
        src/Roles/Buffy.cpp
        src/Roles/Buffy.h
        src/Roles/Role.cpp
        src/Roles/Role.hpp

        src/Actions/Action.cpp
        src/Actions/Action.h
        src/Actions/Flee.cpp
        src/Actions/Flee.h
        src/Actions/Chase.cpp
        src/Actions/Chase.hpp
        src/Actions/ChaseAndBite.cpp
        src/Actions/ChaseAndBite.hpp
        )
