#ifndef POA_L4_HUMANOID_H
#define POA_L4_HUMANOID_H

include "GameEnvironment/Position.h"

class Humanoid {
   Position pos;
   bool alive;
   Action action;

public:
   Humanoid();
   Humanoid(Position position);

   Position getPos();
   void setPos(Position position);

   bool isAlive();

};


#endif //POA_L4_HUMANOID_H
