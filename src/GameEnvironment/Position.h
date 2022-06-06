#ifndef POA_L4_POSITION_H
#define POA_L4_POSITION_H


#include <cstdio>

/**
 * Represent the position of an object on the field.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Position {
    std::size_t _x;
    std::size_t _y;

public:
    /**
     * Constructs a position at the given coordinates.
     * @param x  The x coordinate.
     * @param y  The y coordinate.
     */
    Position(std::size_t x, std::size_t y);

    /**
     * Constructs a position from another position.
     * @param other  The other position.
     */
    Position(Position const &other);

    /**
    * Gets the x coordinate.
    * @return  The x coordinate.
    */
    std::size_t getX() const;

    /**
     * Gets the y coordinate.
     * @return The y coordinate.
     */
    std::size_t getY() const;

    /**
     * Sets the x coordinate.
     * @param newX The new x coordinate.
     */
    void setX(size_t newX);

    /**
     * Sets the y coordinate.
     * @param newY The new y coordinate.
     */
    void setY(size_t newY);
};


#endif //POA_L4_POSITION_H
