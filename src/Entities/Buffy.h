#ifndef POA_L4_BUFFY_H
#define POA_L4_BUFFY_H


#include "Humanoid.h"

class Buffy : public Humanoid {
public:
    Buffy(const Position &position);
    void accept(HumanoidVisitor &visitor) override;
};


#endif //POA_L4_BUFFY_H
