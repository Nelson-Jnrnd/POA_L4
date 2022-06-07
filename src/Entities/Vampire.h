//
// Created by André on 02.06.2022.
//

#ifndef POA_L4_VAMPIRE_H
#define POA_L4_VAMPIRE_H

#include "Role.hpp"

/**
 * Represent a Vampire
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Vampire : public Role {
    std::shared_ptr<Action> _chaseHumans;
public:

    Vampire(Humanoid& owner);

    void setAction(const Field &field) override;

    void accept(HumanoidVisitor &visitor) override;
};


#endif //POA_L4_VAMPIRE_H
