#ifndef POA_L4_HUMAN_HPP
#define POA_L4_HUMAN_HPP


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
    /**
     * Action to flee and move randomly
     */
    const std::shared_ptr<Action> _flee;
public:
    /**
     * Constructs a Human role for a given Humanoid.
     * @param owner The humanoid that is playing the role.
     */
    Human(Humanoid& owner);

    void setAction(const Field &field) override;

    void accept(RoleVisitor &visitor) override;

    int getSpeed() const override;
};


#endif //POA_L4_HUMAN_HPP
