#ifndef POA_L4_HUMAN_H
#define POA_L4_HUMAN_H


#include "Humanoid.h"

class Human : public Humanoid {
public:
    Human(const Position &position);
    void accept(HumanoidVisitor &visitor) override;
};


#endif //POA_L4_HUMAN_H
