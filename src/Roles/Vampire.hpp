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
    static const double ODDS_TO_TRANSFORM;
    std::shared_ptr<Action> _chaseHumans;
public:

    Vampire(Humanoid& owner);

    void setAction(const Field &field) override;

    void accept(RoleVisitor &visitor) override;
};


#endif //POA_L4_VAMPIRE_HPP
