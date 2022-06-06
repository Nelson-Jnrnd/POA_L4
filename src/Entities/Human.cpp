//
// Created by André on 02.06.2022.
//

#include "Human.h"

Human::Human(const Position &position) : Humanoid(position){}

void Human::accept(HumanoidVisitor &visitor) {
    visitor.visit(*this);
}
