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
    double _oddsToTransform;
public:
    ChaseAndBite(Humanoid &subject, const std::type_info &targetType, double oddsToTransform);

protected:
    void catchTarget(Humanoid *target) override;
};


#endif //POA_L4_CHASEANDBITE_HPP
