#include "Humanoid.h"
#include "../Roles/Human.h"
#include "../Roles/Vampire.h"
#include "../Roles/Buffy.h"

Humanoid::Humanoid(const Position &position)
: _position(position), _isAlive(true) {}

const Position &Humanoid::getPosition() const {
    return _position;
}

void Humanoid::setPosition(const Position &newPosition) {
    _position = newPosition;
}

bool Humanoid::isAlive() const {
    return _isAlive;
}

void Humanoid::kill() {
    _isAlive = false;
}

void Humanoid::accept(RoleVisitor &visitor) {
    _role->accept(visitor);
}

void Humanoid::setRole(std::unique_ptr<Role> role) {
    _role = std::move(role);
}


void Humanoid::setAction(const Field &field) {
    _role->setAction(field);
}

void Humanoid::executeAction(Field &field) {
    _role->executeAction(field);
}

const std::unique_ptr<Role> &Humanoid::getRole() const {
    return _role;
}



