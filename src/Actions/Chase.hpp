//
// Created by NelsonWork on 06.06.2022.
//

#ifndef POA_L4_CHASE_HPP
#define POA_L4_CHASE_HPP

#include "Action.hpp"
#include "../Game/Field.hpp"


/**
 * Represent the action of chasing a type of Humanoid.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class Chase : public Action {
public:
    /**
     * Constructs a Chase action.
     * @param subject The humanoid that is performing the action.
     * @param target The type of humanoids that are chased.
     */
    Chase(Humanoid& subject, const std::type_info &targetType);
    /**
     * Move the humanoid to the adjacent position that is the closest to the target.
     * @param field The field where the action will be performed.
     */
    void execute(Field& field) override;

protected:
    /**
     * The type of humanoids that are chased.
     */
    const std::type_info &_targetType;
    /**
     * The action to perform when the chase is successful.
     * The action is to kill the humanoid.
     * @param target The humanoid that has been caught.
     */
    virtual void catchTarget(Humanoid *target) const;
};

#endif //POA_L4_CHASE_HPP
