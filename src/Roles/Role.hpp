//
// Created by NelsonWork on 07.06.2022.
//

#ifndef POA_L4_ROLE_HPP
#define POA_L4_ROLE_HPP

class Action;

#include <memory>
#include "../Game/Field.hpp"
#include "RoleVisitor.hpp"

/**
 * Represent a Role
 * @version 1.0
 * @date 07.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class Role {
    std::shared_ptr<Action> _actionStrategy;
    Humanoid& _owner;
protected:
    explicit Role(Humanoid& owner);
    void setStrategy(const std::shared_ptr<Action> &actionStrategy);
public:
    virtual ~Role() = default;

    Humanoid &getOwner() const;

    void executeAction(Field& field);

    virtual void setAction(const Field& field) = 0;

    virtual void accept(RoleVisitor &visitor) = 0;
};


#endif //POA_L4_ROLE_HPP
