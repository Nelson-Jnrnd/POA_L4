#ifndef POA_L4_FLEE_HPP
#define POA_L4_FLEE_HPP


#include "Action.hpp"
#include "../Game/Field.hpp"

class Flee : public Action {
public:
    Flee(Humanoid& subject);
    void execute(Field& field) override;
};


#endif //POA_L4_FLEE_HPP
