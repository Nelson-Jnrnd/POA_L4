//
// Created by André on 02.06.2022.
//

#include "Buffy.h"

void Buffy::accept(HumanoidVisitor &visitor) {
    visitor.visit(*this);
}

Buffy::Buffy(const Position &position) : Humanoid(position) {}
