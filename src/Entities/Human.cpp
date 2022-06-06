//
// Created by André on 02.06.2022.
//

#include "Human.h"

void Human::accept(HumanoidVisitor &visitor) {
    visitor.visit(*this);
}

Human::Human(const Position &position) : Humanoid(position){}
