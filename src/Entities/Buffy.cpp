//
// Created by André on 02.06.2022.
//


#include "Buffy.h"
#include "../Actions/Chase.hpp"
#include "Vampire.h"
#include <memory>

Buffy::Buffy(const Position &position) : _chaseVampires(std::make_shared<Chase>(*this, typeid(Vampire))),
                                         Humanoid(position){
    setStrategy(_chaseVampires);
}

void Buffy::accept(HumanoidVisitor &visitor) {
    visitor.visit(*this);
}

void Buffy::setAction(const Field &field) {
}

