#ifndef POA_L4_FLEE_H
#define POA_L4_FLEE_H


#include "Action.h"
#include "../Game/Field.h"

class Flee : public Action {
public:
    Flee(Humanoid& subject);
    void execute(Field& field) override;
};


#endif //POA_L4_FLEE_H
