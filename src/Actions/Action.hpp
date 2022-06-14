#ifndef POA_L4_ACTION_HPP
#define POA_L4_ACTION_HPP

class Humanoid;
class Field;

#include "../Game/Field.hpp"
#include "../Game/Humanoid.hpp"

/**
 * Represent an action that can be executed by a Humanoid.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Action {
protected:
    /**
     * The humanoid that is performing the action.
     */
    Humanoid& _subject;

    /**
     * Constructs an action for a given Humanoid.
     * @param subject The humanoid that is performing the action.
     */
    Action(Humanoid& subject);
public:

    /**
     * Execute the action.
     * @param field The field where the action will be performed.
     */
    virtual void execute(Field& field) = 0;

    virtual ~Action() = default;
};


#endif //POA_L4_ACTION_HPP
