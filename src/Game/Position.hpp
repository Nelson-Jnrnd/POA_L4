#ifndef POA_L4_POSITION_HPP
#define POA_L4_POSITION_HPP



#include <cstdio>

/**
 * Represent the position of an object on the field.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Position {
    int _x;
    int _y;

public:
    /**
     * Constructs a position at the given coordinates.
     * @param x  The x coordinate.
     * @param y  The y coordinate.
     */
    Position(int x, int y);

    /**
     * Constructs a position from another position.
     * @param other  The other position.
     */
    Position(const Position &other);

    /**
    * Gets the x coordinate.
    * @return  The x coordinate.
    */
    int getX() const;

    /**
     * Gets the y coordinate.
     * @return The y coordinate.
     */
    int getY() const;

    /**
     * Sets the x coordinate.
     * @param newX The new x coordinate.
     */
    void setX(int newX);

    /**
     * Sets the y coordinate.
     * @param newY The new y coordinate.
     */
    void setY(int newY);

    /**
     * Gets the distance between two positions.
     * @param position the other position
     * @return  The distance between the two positions.
     */
    double getEuclideanDistance(const Position &position) const;

    bool operator==(const Position &other) const;

};


#endif //POA_L4_POSITION_HPP
