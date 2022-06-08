#ifndef POA_L4_FLEE_HPP
#define POA_L4_FLEE_HPP


#include "Action.hpp"
#include "../Game/Field.hpp"

/**
 * Represent the action of fleeing.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Flee : public Action {
public:
    /**
     * Constructs a Flee action for a given Humanoid.
     * @param subject  The humanoid that is performing the action.
     */
    Flee(Humanoid& subject);
    /**
     * Move the humanoid to a random adjacent position.
     * @param field  The field where the action will be performed.
     */
    void execute(Field& field) override;
};


#endif //POA_L4_FLEE_HPP
