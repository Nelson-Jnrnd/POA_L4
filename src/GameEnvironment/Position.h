#ifndef POA_L4_POSITION_H
#define POA_L4_POSITION_H


#include <cstdio>

class Position {

   std::size_t _x;
   std::size_t _y;

public:
   Position(std::size_t x, std::size_t y);
   Position(Position const &other);

   std::size_t getX() const;

   std::size_t getY() const;

   void setX(size_t newX);

   void setY(size_t newY);
};


#endif //POA_L4_POSITION_H
