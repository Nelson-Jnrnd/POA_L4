#ifndef POA_L4_POSITION_H
#define POA_L4_POSITION_H


class Position {
   std::size_t x;
   std::size_t y;

public:
   Position(std::size_t x, std::size_t y);

   size_t getX() const;

   size_t getY() const;

   void setX(size_t x);

   void setY(size_t y);
};


#endif //POA_L4_POSITION_H
