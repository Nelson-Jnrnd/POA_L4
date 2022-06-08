//
// Created by André on 02.06.2022.
//

#ifndef POA_L4_VAMPIRE_HPP
#define POA_L4_VAMPIRE_HPP

#include "Role.hpp"

/**
 * Represent a Vampire
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Vampire : public Role {
    /**
     * Odds a vampire has to transform a human into a vampire
     */
    static const double ODDS_TO_TRANSFORM;
    /**
     * Action to chase and transform humans into vampires
     */
    std::shared_ptr<Action> _chaseHumans;
public:

    Vampire(Humanoid& owner);

    void setAction(const Field &field) override;

    void accept(RoleVisitor &visitor) override;
};


#endif //POA_L4_VAMPIRE_HPP
