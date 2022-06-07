//
// Created by André on 02.06.2022.
//

#include "Vampire.h"
#include "Human.h"
#include "../Actions/Chase.hpp"

Vampire::Vampire(const Position &position) : _chaseHumans(std::make_shared<Chase>(*this, typeid(Human))),
                                             Humanoid(position){
    setStrategy(_chaseHumans);
}

void Vampire::accept(HumanoidVisitor &visitor) {
    visitor.visit(*this);
}

void Vampire::setAction(const Field &field) {

}
