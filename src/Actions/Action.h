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

    virtual ~Action() = default;
};


#endif //POA_L4_ACTION_H
