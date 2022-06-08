//
// Created by André on 02.06.2022.
//

#include "Vampire.hpp"
#include "Human.hpp"
#include "../Actions/ChaseAndBite.hpp"

const double Vampire::ODDS_TO_TRANSFORM = 0.5;

Vampire::Vampire(Humanoid& owner) : _chaseHumans(std::make_shared<ChaseAndBite>(owner, typeid(Human), ODDS_TO_TRANSFORM)),
                     Role(owner){
    setStrategy(_chaseHumans);
}

void Vampire::accept(RoleVisitor &visitor) {
    visitor.visit(*this);
}

void Vampire::setAction(const Field &field) {
}

int Vampire::getSpeed() const {
    return 1;
}

