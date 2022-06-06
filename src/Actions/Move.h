#ifndef POA_L4_MOVE_H
#define POA_L4_MOVE_H

#include "Action.h"

class Move : public Action{
   Position destPos;

public:
   Move(Humanoid* humanoid, Position destPos);

   void execute(Field& field) override;
};


#endif //POA_L4_MOVE_H
