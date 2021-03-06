#include <iostream>
#include "Flee.hpp"

#include "vector"
#include "../Random/Random.hpp"

Flee::Flee(Humanoid &subject) : Action(subject) {}

void Flee::execute(Field &field) {
    for (int i = 0; i < _subject.getRole()->getSpeed(); ++i) {
        std::vector<Position> adjacentPositions(field.getAdjacentPositions(_subject.getPosition()));

        if (!adjacentPositions.empty()) {
            const Position &randomPosition = adjacentPositions.at(
                    Random::getInstance().getRandomInt(0, (int)adjacentPositions.size() - 1));

            _subject.setPosition(randomPosition);
        }
    }
}
