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
    const std::type_info &_targetType;
public:
    Chase(Humanoid& subject, const std::type_info &targetType);
    void execute(Field& field) override;
};

#endif //POA_L4_CHASE_HPP
