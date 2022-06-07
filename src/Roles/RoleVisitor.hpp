//
// Created by NelsonWork on 06.06.2022.
//

#ifndef POA_L4_ROLEVISITOR_HPP
#define POA_L4_ROLEVISITOR_HPP


class Vampire;
class Human;
class Buffy;

/**
 * Represent a RoleVisitor
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class RoleVisitor {
public:
    virtual ~RoleVisitor() = default;

    virtual void visit(Human &human) = 0;

    virtual void visit(Vampire &vampire) = 0;

    virtual void visit(Buffy &buffy) = 0;
};


#endif //POA_L4_ROLEVISITOR_HPP
