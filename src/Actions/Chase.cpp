//
// Created by NelsonWork on 06.06.2022.
//

#include "Chase.hpp"
#include "../Roles/Vampire.h"
#include "../Game/Humanoid.h"
#include "../Roles/Buffy.h"
#include "../Roles/Human.h"


void Chase::execute(Field &field) {
    std::vector<Position> adjacentPositions (field.getAdjacentPositions(_subject.getPosition()));

    if(!adjacentPositions.empty()) {
        Humanoid* target = field.getClosestHumanoid(_subject, _targetType);
        if (target != nullptr) {
            Position* bestPosition = nullptr;
            for (auto &adjacentPosition : adjacentPositions) {
                if (bestPosition == nullptr ||
                bestPosition->getEuclideanDistance(target->getPosition()) >
                adjacentPosition.getEuclideanDistance(target->getPosition())) {
                    bestPosition = &adjacentPosition;
                }
            }
            if(*bestPosition == target->getPosition())
                catchTarget(target);
            else
                _subject.setPosition(*bestPosition);
        }
    }
}

Chase::Chase(Humanoid &subject, const std::type_info &targetType) : Action(subject), _targetType(targetType) {}

void Chase::catchTarget(Humanoid *target) {
    target->kill();
}


