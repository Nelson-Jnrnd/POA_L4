#ifndef POA_L4_BUFFY_H
#define POA_L4_BUFFY_H


#include "Humanoid.h"

/**
 * Represent a Buffy in the Buffy vampire hunter game.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Buffy : public Humanoid {
public:
    /**
     * Constructs a Buffy at the given position.
     * @param position  The position of the Buffy.
     */
    Buffy(const Position &position);

    void accept(HumanoidVisitor &visitor) override;
};


#endif //POA_L4_BUFFY_H
