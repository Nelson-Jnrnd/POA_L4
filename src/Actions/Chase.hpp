//
// Created by NelsonWork on 06.06.2022.
//

#ifndef POA_L4_CHASE_HPP
#define POA_L4_CHASE_HPP

#include "Action.h"
#include "../GameEnvironment/Field.h"


/**
 * Represent a Chase
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class Chase : public Action {
public:
    Chase(Humanoid& subject, const std::type_info &targetType);
    void execute(Field& field) override;

    virtual ~Chase() = default;
protected:
    const std::type_info &_targetType;
    virtual void catchTarget(Humanoid *target);
};

#endif //POA_L4_CHASE_HPP
