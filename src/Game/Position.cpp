#include <cmath>
#include "Position.hpp"

Position::Position(int x, int y): _x(x), _y(y) {}


int Position::getX() const{
   return _x;
}

int Position::getY() const{
   return _y;
}

void Position::setX(int newX){
    _x = newX;
}

void Position::setY(int newY){
    _y = newY;
}

double Position::getEuclideanDistance(const Position &position) const {
    return sqrt(pow(position.getX() - _x, 2) + pow(position.getY() - _y, 2));
}

bool Position::operator==(const Position &other) const {
    return _x == other.getX() && _y == other.getY();
}


