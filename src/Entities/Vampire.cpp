//
// Created by André on 02.06.2022.
//

#include "Vampire.h"

Vampire::Vampire(const Position &position) : Humanoid(position) {}

void Vampire::accept(HumanoidVisitor &visitor) {
    visitor.visit(*this);
}
