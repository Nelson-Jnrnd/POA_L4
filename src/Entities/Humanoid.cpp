#include "Humanoid.h"
#include "../Actions/Flee.h"

Humanoid::Humanoid(const Position &position) : _position(position), _isAlive(true), _actionStrategy() {}

const Position &Humanoid::getPosition() const {
    return _position;
}

void Humanoid::setPosition(const Position &newPosition) {
    _position = newPosition;
}

bool Humanoid::isAlive() const {
    return _isAlive;
}

void Humanoid::setAction(const Field &field) {
    _actionStrategy = std::make_unique<Flee>(*this);
}

void Humanoid::executeAction(Field &field) {
    _actionStrategy->execute(field);
}
