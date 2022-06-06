#ifndef POA_L4_TRANSFORM_H
#define POA_L4_TRANSFORM_H

#include "Action.h"

class Transform : public Action{
public:
   explicit Transform(Humanoid* human);

   void execute(Field& field) override;
};

#endif //POA_L4_TRANSFORM_H
