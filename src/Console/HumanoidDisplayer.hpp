//
// Created by NelsonWork on 06.06.2022.
//

#ifndef POA_L4_HUMANOIDDISPLAYER_HPP
#define POA_L4_HUMANOIDDISPLAYER_HPP


#include "../Roles/RoleVisitor.hpp"
#include "../Game/Humanoid.hpp"
#include <cstdio>
#include <iostream>
#include <windows.h>

/**
 * Represent a HumanoidDisplayer that can display a Humanoid depending on its type.
 * The result is available through the getOutputChar() method.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class HumanoidDisplayer : public RoleVisitor {
    /**
     * The output char of the last Humanoid visited.
     */
    char _outputChar;

    HANDLE charColor = GetStdHandle(STD_OUTPUT_HANDLE);
public:
    /**
     * Constructs a HumanoidDisplayer.
     */
    HumanoidDisplayer();

    ~HumanoidDisplayer() override = default;

    /**
     * Gets the output char of the last Humanoid visited.
     * @return The output char of the last Humanoid visited.
     */
    char getOutputChar() const;

    /**
     * Visits a Humanoid.
     * @param human The Humanoid to visit.
     */
    void visit(Human &human) override;

    /**
     * Visits a Vampire.
     * @param vampire The Vampire to visit.
     */
    void visit(Vampire &vampire) override;

    /**
     * Visits a Buffy.
     * @param buffy The Buffy to visit.
     */
    void visit(Buffy &buffy) override;
};


#endif //POA_L4_HUMANOIDDISPLAYER_HPP
