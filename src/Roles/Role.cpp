//
// Created by NelsonWork on 07.06.2022.
//

#include "Role.hpp"

Role::Role(Humanoid &owner) : _owner(owner) {}

Humanoid &Role::getOwner() const {
    return _owner;
}
