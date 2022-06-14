#ifndef POA_L4_BUFFY_HPP
#define POA_L4_BUFFY_HPP


#include "Human.hpp"

/**
 * Represent a Buffy in the Buffy vampire hunter game.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Buffy : public Human {
    /**
     * Action to chase and kill vampires
     */
    const std::shared_ptr<Action> _chaseVampires;
public:
    /** TODO check si on peut mettre ça en privé :(
     * Constructs a Buffy for the humanoid.
     * @param owner The humanoid that is playing the role.
     */
    Buffy(Humanoid& owner);

    void setAction(const Field &field) override;

    void accept(RoleVisitor &visitor) override;

    int getSpeed() const override;
};


#endif //POA_L4_BUFFY_HPP
