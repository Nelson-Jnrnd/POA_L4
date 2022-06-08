//
// Created by NelsonWork on 07.06.2022.
//

#ifndef POA_L4_CHASEANDBITE_HPP
#define POA_L4_CHASEANDBITE_HPP


#include "Chase.hpp"

/**
 * Represent a ChaseAndBite
 * @version 1.0
 * @date 07.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class ChaseAndBite : public Chase{
    /**
     * Odds the bite has to transform a human into a vampire.
     */
    double _oddsToTransform;
public:
    /**
     * Constructs a ChaseAndBite action.
     * @param subject The humanoid that is performing the action.
     * @param targetType The type of humanoids that are chased.
     * @param oddsToTransform  The odds the bite has to transform a human into a vampire.
     */
    ChaseAndBite(Humanoid &subject, const std::type_info &targetType, double oddsToTransform);

protected:
    /**
     * The action to perform when the chase is successful.
     * The action is to transform or kill the humanoid.
     * @param target The humanoid that has been caught.
     */
    void catchTarget(Humanoid *target) override;
};


#endif //POA_L4_CHASEANDBITE_HPP
