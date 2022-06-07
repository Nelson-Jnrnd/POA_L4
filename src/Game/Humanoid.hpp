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

    std::unique_ptr<Role> _role;
public:
    const std::unique_ptr<Role> &getRole() const;

//private:
    /**
     * Constructs a humanoid at the given position.
     * @param position  The position of the humanoid.
     */
    Humanoid(const Position &position);

public:
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

    void executeAction(Field& field);

    virtual void setAction(const Field& field);

    void accept(RoleVisitor &visitor);

    void kill();

    template <typename T>
    static Humanoid* createHumanoid(const Position &position) {
        Humanoid* newHuman = new Humanoid(position);
        newHuman->setRole(std::make_unique<T>(T(*newHuman)));
        return newHuman;
    };
};


#endif //POA_L4_HUMANOID_HPP
