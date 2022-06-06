//
// Created by André on 02.06.2022.
//

#ifndef POA_L4_ACTION_H
#define POA_L4_ACTION_H

class Humanoid;
class Field;

#include "../GameEnvironment/Field.h"
#include "../Entities/Humanoid.h"

class Action {
protected:
    Humanoid& _subject;
public:
    Action(Humanoid& subject);
    virtual void execute(Field& field) = 0;
};


#endif //POA_L4_ACTION_H
