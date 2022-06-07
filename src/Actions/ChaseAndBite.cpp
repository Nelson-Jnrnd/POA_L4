//
// Created by NelsonWork on 07.06.2022.
//

#include "ChaseAndBite.hpp"

ChaseAndBite::ChaseAndBite(Humanoid &subject, const std::type_info &targetType) : Chase(subject, targetType) {

}

void ChaseAndBite::catchTarget(Humanoid *target) {
    // target->bite();
}
