//
// Created by NelsonWork on 06.06.2022.
//

#ifndef POA_L4_HUMANOIDDISPLAYER_HPP
#define POA_L4_HUMANOIDDISPLAYER_HPP


#include "../Visitor/HumanoidVisitor.hpp"
#include "../Entities/Humanoid.h"
#include <cstdio>
#include <iostream>

/**
 * Represent a HumanoidDisplayer
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class HumanoidDisplayer : public HumanoidVisitor {
public:
    /**
     * Constructor
     */
    HumanoidDisplayer();

    /**
     * Destructor
     */
    ~HumanoidDisplayer() override = default;

    void visit(Human &human) override;

    void visit(Vampire &vampire) override;

    void visit(Buffy &buffy) override;
};


#endif //POA_L4_HUMANOIDDISPLAYER_HPP
