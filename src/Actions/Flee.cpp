#include <iostream>
#include "Flee.h"

#include "vector"

Flee::Flee(Humanoid &subject) : Action(subject) {}

void Flee::execute(Field &field) {
    std::vector<Position> adjacentPositions (field.getAdjacentPositions(_subject.getPosition()));

    for (auto &position : adjacentPositions) {
        std::cout << "Position: " << position.getX() << " " << position.getY() << std::endl;
    }
}
