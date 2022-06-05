#include "Humanoid.h"


#include "../Visitor/HumanoidVisitor.hpp"

Humanoid::Humanoid(const Position &position) : _position(position), _isAlive(true) {}

const Position &Humanoid::getPosition() const {
    return _position;
}

void Humanoid::setPosition(const Position& newPosition) {
    _position = newPosition;
}

bool Humanoid::isAlive() const {
    return _isAlive;
}