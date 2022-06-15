#ifndef POA_L4_HUMANOID_HPP
#define POA_L4_HUMANOID_HPP


class Action;
class Role;
#include <cstdio>
#include "Position.hpp"
#include "../Roles/RoleVisitor.hpp"
#include "../Actions/Action.hpp"
#include "../Roles/Role.hpp"

/**
 * Represent a Humanoid in the Buffy vampire hunter game.
 * A Humanoid is an entity that can be moved on the field.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Humanoid {
    /**
     * The position of the humanoid.
     */
    Position _position;
    /**
     * True if the humanoid is alive.
     */
    bool _isAlive;

    /**
     * The role of the humanoid in the game. Determines the actions that the humanoid can do and when he will do them.
     */
    std::unique_ptr<Role> _role;

    /**
     * The action the role is currently doing.
     */
    std::shared_ptr<Action> _actionStrategy;

    /**
     * Constructs a humanoid at the given position.
     * @param position  The position of the humanoid.
     */
    Humanoid(const Position &position);
public:
    /**
     * Returns the role of the humanoid.
     * @return The role of the humanoid.
     */
    const std::unique_ptr<Role> &getRole() const;

    /**
     * Give the humanoid the role specified in the parameter.
     * @param role The role of the humanoid.
     */
    void setRole(std::unique_ptr<Role> role);
    /**
     * Destructs the humanoid.
     */
    virtual ~Humanoid() = default;
    /**
     * Gets the position of the humanoid.
     * @return  The position of the humanoid.
     */
    const Position &getPosition() const;

    /**
     * Gets if the humanoid is alive.
     * @return  True if the humanoid is alive.
     */
    bool isAlive() const;

    /**
     * Move the humanoid to the given position.
     * @param newPosition  The new position of the humanoid.
     */
    void setPosition(const Position &newPosition);

    /**
     * Execute the action of the humanoid.
     * @param field The field where the humanoid is.
     */
    void executeAction(Field& field) const;

    /**
     * Set the action the humanoid will do next.
     * @param field The field where the humanoid is.
     */
    void setAction(const Field& field) const;

    /**
     * Kill the humanoid.
     */
    void kill();

    /**
     * Change the action that the humanoid will perform.
     * @param actionStrategy The action that the humanoid will perform.
     */
    void setStrategy(const std::shared_ptr<Action> &actionStrategy);

    /**
     * Create a humanoid of the specified type at the given position.
     * @tparam Role The role of the humanoid.
     * @param position The position of the humanoid.
     * @return The newly created humanoid.
     */
    template <typename Role>
    static Humanoid* createHumanoid(const Position &position) {
        Humanoid* newHuman = new Humanoid(position);
        newHuman->setRole(std::make_unique<Role>(Role(*newHuman)));
        return newHuman;
    };
};


#endif //POA_L4_HUMANOID_HPP
