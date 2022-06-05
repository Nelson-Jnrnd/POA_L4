#ifndef POA_L4_HUMANOID_H
#define POA_L4_HUMANOID_H


#include <cstdio>
#include "../GameEnvironment/Position.h"
#include "../Visitor/HumanoidVisitor.hpp"

class Humanoid {
   Position _position;
   bool _isAlive;

protected:
    Humanoid(const Position &position);

public:
   const Position& getPosition() const;
   bool isAlive() const;

   void setPosition(const Position& newPosition);

    virtual void accept(HumanoidVisitor &visitor) = 0;
};


#endif //POA_L4_HUMANOID_H
