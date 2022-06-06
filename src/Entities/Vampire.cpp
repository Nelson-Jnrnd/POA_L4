//
// Created by André on 02.06.2022.
//

#include "Vampire.h"

void Vampire::accept(HumanoidVisitor &visitor) {
    visitor.visit(*this);
}

Vampire::Vampire(const Position &position) : Humanoid(position) {}