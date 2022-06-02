#include "Position.h"

Position::Position(std::size_t x, std::size_t y): x(x), y(y) {}

size_t getX() const{
   return x;
}

size_t getY() const{
   return y;
}

void setX(size_t x){
   Position::x = x;
}

void setY(size_t y){
   Position::y = y;
}

