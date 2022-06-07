#include <iostream>
#include "Flee.hpp"

#include "vector"
#include "../Random/Random.hpp"

Flee::Flee(Humanoid &subject) : Action(subject) {}

void Flee::execute(Field &field) {
    std::vector<Position> adjacentPositions (field.getAdjacentPositions(_subject.getPosition()));

    if(!adjacentPositions.empty()) {
        Position &randomPosition = adjacentPositions.at(Random::getInstance().getRandomInt(0, adjacentPositions.size() - 1));

        _subject.setPosition(randomPosition);
    }
}
