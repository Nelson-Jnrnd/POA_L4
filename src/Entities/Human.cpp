//
// Created by André on 02.06.2022.
//

#include "Human.h"

#include <memory>
#include "../Actions/Flee.h"


Human::Human(Humanoid &owner) : _flee(std::make_shared<Flee>(owner)), Role(owner) {
    setStrategy(_flee);
}

void Human::accept(HumanoidVisitor &visitor) {
    visitor.visit(*this);
}

void Human::setAction(const Field &field) {
}
