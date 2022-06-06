#include <cmath>
#include "Position.h"

using std::size_t;

Position::Position(size_t x, size_t y): _x(x), _y(y) {}

Position::Position(Position const &other): Position(other.getX(), other.getY()) {}

size_t Position::getX() const{
   return _x;
}

size_t Position::getY() const{
   return _y;
}

void Position::setX(size_t newX){
    _x = newX;
}

void Position::setY(size_t newY){
    _y = newY;
}

double Position::getEuclideanDistance(const Position &position) const {
    return sqrt(pow(position.getX() - _x, 2) + pow(position.getY() - _y, 2));
}

bool Position::operator==(const Position &other) const {
    return _x == other.getX() && _y == other.getY();
}


