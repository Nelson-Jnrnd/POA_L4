#ifndef POA_L4_FIELD_H
#define POA_L4_FIELD_H


#include <cstdio>
#include <memory>
#include <list>
#include <vector>
#include "../Entities/Humanoid.h"

/**
 * Represent the Field of the buffy vampire hunter game.
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author André Marques Nora
 */
class Field {
    /**
     * The width of the field.
     */
    const std::size_t _width;
    /**
     * The height of the field.
     */
    const std::size_t _height;

    unsigned _turn;

    /**
     * The list of humanoids in the game. Can contain dead humanoids.
     */
    std::list<Humanoid*> _humanoids;

public:
    /**
     * Constructs a field with the given width and height.
     * @param width The width of the field.
     * @param height The height of the field.
     */
    Field(std::size_t width, std::size_t height);

    /**
     * Get the width of the field.
     * @return The width of the field.
     */
    std::size_t getWidth() const;

    /**
     * Get the height of the field.
     * @return The height of the field.
     */
    std::size_t getHeight() const;

    /**
     * Adds a human to the field.
     * @param x The x position of the human.
     * @param y The y position of the human.
     */
    void addHuman(std::size_t x, std::size_t y);

    /**
     * Adds a vampire to the field.
     * @param x The x position of the vampire.
     * @param y The y position of the vampire.
     */
    void addVampire(std::size_t x, std::size_t y);

    /**
     * Adds a buffy to the field.
     * @param x The x position of the buffy.
     * @param y The y position of the buffy.
     */
    void addBuffy(std::size_t x, std::size_t y);

    /**
     * Accepts a visitor.
     * The visitor will visit all humanoids in the field.
     * @param visitor The visitor.
     */
    void accept(HumanoidVisitor &visitor);


    std::vector<Position> getAdjacentPositions(const Position& position) const;

    std::shared_ptr<Humanoid> getClosestHumanoid(const Humanoid& humanoid, const std::type_info& type) const;


    virtual unsigned nextTurn();
protected:
    /**
     * Gets the list of humanoids in the field.
     * @return The list of humanoids in the field.
     */
    const std::list<Humanoid*> &getHumanoids() const;
};


#endif //POA_L4_FIELD_H
