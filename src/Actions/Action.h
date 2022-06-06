#ifndef POA_L4_ACTION_H
#define POA_L4_ACTION_H

#include "../GameEnvironment/Field.h"
#include "../Entities/Humanoid.h"

class Action {
protected:
   Humanoid* humanoid;

public:
   Action(Humanoid* humanoid);

   virtual void execute(Field& field) = 0;

   virtual ~Action() = default;
};


#endif //POA_L4_ACTION_H
