#ifndef POA_L4_FIELD_HPP
#define POA_L4_FIELD_HPP


#include <cstdio>
#include <memory>
#include <list>
#include <vector>
#include "Humanoid.hpp"

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

    /**
     * Number of turns simulated by the field.
     */
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
    void addHuman(int x, int y);

    /**
     * Adds a vampire to the field.
     * @param x The x position of the vampire.
     * @param y The y position of the vampire.
     */
    void addVampire(int x, int y);

    /**
     * Adds a buffy to the field.
     * @param x The x position of the buffy.
     * @param y The y position of the buffy.
     */
    void addBuffy(int x, int y);

    /**
     * Accepts a visitor.
     * The visitor will visit all humanoids in the field.
     * @param visitor The visitor.
     */
    void accept(RoleVisitor &visitor);

    /**
     * Returns the adjacent positions to the one given in parameter.
     * The position given is considered adjacent to itself.
     * @param position "source" position.
     * @return Positions adjacent to the given position.
     */
    std::vector<Position> getAdjacentPositions(const Position& position) const;

    /**
     * Returns the closest humanoid of the given type to the given humanoid.
     * @param humanoid The "source" humanoid to which the returned humanoid is closest to.
     * @param type The type of humanoid to search.
     * @return The closest humanoid.
     */
    Humanoid* getClosestHumanoid(const Humanoid& humanoid, const std::type_info& type) const;

    /**
     * Simulates a turn of the game.
     * @return The current turn.
     */
    virtual unsigned nextTurn();
protected:
    /**
     * Gets the list of humanoids in the field.
     * @return The list of humanoids in the field.
     */
    const std::list<Humanoid*> &getHumanoids() const;
};


#endif //POA_L4_FIELD_HPP
