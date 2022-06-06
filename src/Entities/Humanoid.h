#ifndef POA_L4_HUMANOID_H
#define POA_L4_HUMANOID_H


#include <cstdio>
#include "../GameEnvironment/Position.h"
#include "../Visitor/HumanoidVisitor.hpp"

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

protected:
    /**
     * Constructs a humanoid at the given position.
     * @param position  The position of the humanoid.
     */
    Humanoid(const Position &position);

public:
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

    virtual void accept(HumanoidVisitor &visitor) = 0;

    void kill();
};


#endif //POA_L4_HUMANOID_H
