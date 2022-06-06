#ifndef POA_L4_ELIMINATE_H
#define POA_L4_ELIMINATE_H

#include "Action.h"

class Eliminate : public Action{
public:
   explicit Eliminate(Humanoid* humanoid);

   void execute(Field& field) override;
};


#endif //POA_L4_ELIMINATE_H
