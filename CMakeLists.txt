cmake_minimum_required(VERSION 3.21)
project(POA_L4)

set(CMAKE_CXX_STANDARD 17)

add_executable(POA_L4 src/main.cpp
        src/Visitor/HumanoidVisitor.hpp

        src/Console/HumanoidDisplayer.cpp
        src/Console/HumanoidDisplayer.hpp
        src/Console/StreamField.cpp
        src/Console/StreamField.hpp

        src/GameEnvironment/Position.cpp
        src/GameEnvironment/Position.h
        src/GameEnvironment/Field.cpp
        src/GameEnvironment/Field.h

        src/Entities/Humanoid.cpp
        src/Entities/Humanoid.h
        src/Entities/Human.cpp
        src/Entities/Human.h
        src/Entities/Vampire.cpp
        src/Entities/Vampire.h
        src/Entities/Buffy.cpp
        src/Entities/Buffy.h
        src/Entities/Role.cpp
        src/Entities/Role.hpp

        src/Actions/Action.cpp
        src/Actions/Action.h
        src/Actions/Flee.cpp
        src/Actions/Flee.h
        src/Actions/Chase.cpp
        src/Actions/Chase.hpp
        src/Actions/ChaseAndBite.cpp
        src/Actions/ChaseAndBite.hpp
        )
