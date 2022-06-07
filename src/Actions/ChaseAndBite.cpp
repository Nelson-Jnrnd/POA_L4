//
// Created by NelsonWork on 07.06.2022.
//

#include "ChaseAndBite.hpp"
#include "../Roles/Vampire.h"

ChaseAndBite::ChaseAndBite(Humanoid &subject, const std::type_info &targetType) : Chase(subject, targetType) {

}

void ChaseAndBite::catchTarget(Humanoid *target) {
    target->setRole(std::make_unique<Vampire>(Vampire(*target)));
}
