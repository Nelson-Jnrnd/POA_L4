#ifndef POA_L4_HUMAN_H
#define POA_L4_HUMAN_H


#include "Role.hpp"

/**
 * Represent a Human in the Buffy vampire hunter game.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Human : public Role {
protected:
    std::shared_ptr<Action> _flee;
public:
    /**
     * Constructs a Human at the given position.
     * @param position  The position of the human.
     */
    Human(Humanoid& owner);

    void setAction(const Field &field) override;

    void accept(RoleVisitor &visitor) override;
};


#endif //POA_L4_HUMAN_H
