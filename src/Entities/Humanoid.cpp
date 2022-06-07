#include "Humanoid.h"
#include "../Actions/Flee.h"

Humanoid::Humanoid(const Position &position)
: _position(position), _isAlive(true), _actionStrategy() {}

const Position &Humanoid::getPosition() const {
    return _position;
}

void Humanoid::setPosition(const Position &newPosition) {
    _position = newPosition;
}

bool Humanoid::isAlive() const {
    return _isAlive;
}

void Humanoid::executeAction(Field &field) {
    if(_actionStrategy)
        _actionStrategy->execute(field);
}

void Humanoid::setStrategy(const std::shared_ptr<Action> &actionStrategy) {
    _actionStrategy = actionStrategy;
}
