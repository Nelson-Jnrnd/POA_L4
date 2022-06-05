//
// Created by André on 02.06.2022.
//

#include "Vampire.h"

void Vampire::accept(HumanoidVisitor &visitor) {
    visitor.visit(*this);
}

Vampire::Vampire() : Humanoid(Position(0,0)) {}
