//
// Created by NelsonWork on 07.06.2022.
//

#include "Role.hpp"

#include <utility>

Role::Role(Humanoid &owner) : _owner(owner) {}

void Role::setStrategy(const std::shared_ptr<Action> &actionStrategy) {
    _actionStrategy = actionStrategy;
}

void Role::executeAction(Field &field) {
    if(_actionStrategy)
        _actionStrategy->execute(field);
}

Humanoid &Role::getOwner() const {
    return _owner;
}



