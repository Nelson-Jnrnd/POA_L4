#include <iostream>
#include "Flee.hpp"

#include "vector"
#include <random>

Flee::Flee(Humanoid &subject) : Action(subject) {}

void Flee::execute(Field &field) {
    std::vector<Position> adjacentPositions (field.getAdjacentPositions(_subject.getPosition()));

    if(!adjacentPositions.empty()) {
        static std::random_device rd;
        static std::mt19937 mt(rd());
        std::uniform_int_distribution<size_t> dist(0, adjacentPositions.size() - 1);

        Position &randomPosition = adjacentPositions.at(dist(mt));

        _subject.setPosition(randomPosition);
    }
}
