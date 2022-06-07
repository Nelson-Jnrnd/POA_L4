#ifndef POA_L4_ACTION_HPP
#define POA_L4_ACTION_HPP

class Humanoid;
class Field;

#include "../Game/Field.hpp"
#include "../Game/Humanoid.hpp"

class Action {
protected:
    Humanoid& _subject;
public:
    Action(Humanoid& subject);
    virtual void execute(Field& field) = 0;

    virtual ~Action() = default;
};


#endif //POA_L4_ACTION_HPP
