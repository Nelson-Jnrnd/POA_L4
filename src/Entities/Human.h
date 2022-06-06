#ifndef POA_L4_HUMAN_H
#define POA_L4_HUMAN_H


#include "Humanoid.h"

/**
 * Represent a Human in the Buffy vampire hunter game.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Human : public Humanoid {
public:
    /**
     * Constructs a Human at the given position.
     * @param position  The position of the human.
     */
    Human(const Position &position);

    void accept(HumanoidVisitor &visitor) override;
};


#endif //POA_L4_HUMAN_H
