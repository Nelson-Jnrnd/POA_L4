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
 * Represent the Role a Humanoid can play in the Buffy vampire hunter game.
 * @version 1.0
 * @date 07.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Role {
    /**
     * The action the role is currently doing.
     */
    std::shared_ptr<Action> _actionStrategy;
    /**
     * The humanoid that is playing the role.
     */
    Humanoid& _owner;
protected:
    /**
     * Constructs a role for a given Humanoid.
     * @param owner  The humanoid that is playing the role.
     */
    explicit Role(Humanoid& owner);
    /**
     * Change the action that the role will perform.
     * @param actionStrategy The action that the role will perform.
     */
    void setStrategy(const std::shared_ptr<Action> &actionStrategy);
public:
    virtual ~Role() = default;

    /**
     * Get the humanoid that is playing the role.
     * @return  The humanoid that is playing the role.
     */
    Humanoid &getOwner() const;

    /**
     * Execute the action that the role is currently doing.
     * @param field The field where the action will be performed.
     */
    void executeAction(Field& field);

    /**
     * Set the action that the role will perform. Depending on the state of the field.
     * @param field The field where the action will be performed.
     */
    virtual void setAction(const Field& field) = 0;

    virtual void accept(RoleVisitor &visitor) = 0;
};


#endif //POA_L4_ROLE_HPP
