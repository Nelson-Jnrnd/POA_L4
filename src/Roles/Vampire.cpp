//
// Created by André on 02.06.2022.
//

#include "Vampire.hpp"
#include "Human.hpp"
#include "../Actions/ChaseAndBite.hpp"



Vampire::Vampire(Humanoid& owner) : _chaseHumans(std::make_shared<ChaseAndBite>(owner, typeid(Human))),
                     Role(owner){
    setStrategy(_chaseHumans);
}

void Vampire::accept(RoleVisitor &visitor) {
    visitor.visit(*this);
}

void Vampire::setAction(const Field &field) {

}

