//
// Created by André on 02.06.2022.
//


#include "Buffy.hpp"
#include "../Actions/Chase.hpp"
#include "Vampire.hpp"
#include <memory>


Buffy::Buffy(Humanoid& owner) : _chaseVampires(std::make_shared<Chase>(owner, typeid(Vampire))),
                                    Human(owner){
    setStrategy(_chaseVampires);
}


void Buffy::accept(RoleVisitor &visitor) {
    visitor.visit(*this);
}

void Buffy::setAction(const Field &field) {
    // If there is no more vampire to kill, buffy is moving randomly
    if(field.getClosestHumanoid(this->getOwner(), typeid(Vampire)) != nullptr) {
        setStrategy(_chaseVampires);
    } else {
        setStrategy(_flee);
    }
}

