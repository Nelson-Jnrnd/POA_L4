//
// Created by André on 02.06.2022.
//

#ifndef POA_L4_VAMPIRE_H
#define POA_L4_VAMPIRE_H


#include "Humanoid.h"

class Vampire : public Humanoid {
public:
    Vampire(const Position &position);
    void accept(HumanoidVisitor &visitor) override;
};


#endif //POA_L4_VAMPIRE_H
