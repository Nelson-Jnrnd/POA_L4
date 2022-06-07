#ifndef POA_L4_BUFFY_H
#define POA_L4_BUFFY_H


#include "Human.h"

/**
 * Represent a Buffy in the Buffy vampire hunter game.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Buffy : public Human {
    std::shared_ptr<Action> _chaseVampires;
public:
    Buffy(Humanoid& owner);

    void setAction(const Field &field) override;

    void accept(RoleVisitor &visitor) override;
};


#endif //POA_L4_BUFFY_H
