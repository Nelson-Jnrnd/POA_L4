//
// Created by NelsonWork on 07.06.2022.
//

#include "ChaseAndBite.hpp"
#include "../Roles/Vampire.hpp"
#include "../Random/Random.hpp"

ChaseAndBite::ChaseAndBite(Humanoid &subject, const std::type_info &targetType, double oddsToTransform) : Chase(subject, targetType), _oddsToTransform(oddsToTransform) {}

void ChaseAndBite::catchTarget(Humanoid *target) const{
    if(Random::getInstance().getRandomDouble(0, 1) > _oddsToTransform)
        target->kill();
    else
        target->setRole(std::make_unique<Vampire>(Vampire(*target)));
}
