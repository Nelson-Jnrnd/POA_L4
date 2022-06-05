//
// Created by NelsonWork on 06.06.2022.
//

#ifndef POA_L4_HUMANOIDVISITOR_HPP
#define POA_L4_HUMANOIDVISITOR_HPP


class Vampire;
class Human;
class Buffy;

/**
 * Represent a HumanoidVisitor
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class HumanoidVisitor {
public:
    virtual ~HumanoidVisitor() = default;

    virtual void visit(Human &human) = 0;

    virtual void visit(Vampire &vampire) = 0;

    virtual void visit(Buffy &buffy) = 0;
};


#endif //POA_L4_HUMANOIDVISITOR_HPP
