cmake_minimum_required(VERSION 3.22)
project(POA_L4)

set(CMAKE_CXX_STANDARD 17)

add_executable(POA_L4 src/main.cpp src/Actions/Action.cpp src/Actions/Action.h src/Actions/Eliminate.cpp
        src/Actions/Eliminate.h src/Actions/Move.cpp src/Actions/Move.h src/Actions/Transform.cpp src/Actions/Transform.h
        src/Entities/Buffy.h src/Entities/Buffy.cpp src/Entities/Human.h src/Entities/human.cpp src/Entities/Humanoid.h
        src/Entities/Humanoid.cpp src/Entities/Vampire.h src/Entities/Vampire.h src/GameEnvironment/Position.h
        src/GameEnvironment/Position.cpp)
