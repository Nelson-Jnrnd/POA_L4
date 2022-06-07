#include "Humanoid.h"
#include "Human.h"
#include "Vampire.h"
#include "Buffy.h"

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

void Humanoid::accept(HumanoidVisitor &visitor) {
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

Humanoid* Humanoid::createHuman(const Position &position) {
    Humanoid* newHuman = new Humanoid(position);
    newHuman->setRole(std::make_unique<Human>(Human(*newHuman)));
    return newHuman;
}

Humanoid *Humanoid::createVampire(const Position &position) {
    Humanoid* newHuman = new Humanoid(position);
    newHuman->setRole(std::make_unique<Vampire>(Vampire(*newHuman)));
    return newHuman;
}

Humanoid *Humanoid::createBuffy(const Position &position) {
    Humanoid* newHuman = new Humanoid(position);
    newHuman->setRole(std::make_unique<Buffy>(Buffy(*newHuman)));
    return newHuman;
}

const std::unique_ptr<Role> &Humanoid::getRole() const {
    return _role;
}


