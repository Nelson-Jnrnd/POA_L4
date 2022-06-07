//
// Created by André on 02.06.2022.
//

#include "Field.hpp"
#include "../Roles/Human.hpp"
#include "../Roles/Vampire.hpp"
#include "../Roles/Buffy.hpp"


using std::list;

Field::Field(std::size_t width, std::size_t height) : _width(width), _height(height), _turn(0), _humanoids(){}

void Field::addHuman(int x, int y) {
    _humanoids.push_back(Humanoid::createHumanoid<Human>(Position(x, y)));
}

void Field::addVampire(int x, int y) {
    _humanoids.push_back(Humanoid::createHumanoid<Vampire>(Position(x, y)));
}

void Field::addBuffy(int x, int y) {
    _humanoids.push_back(Humanoid::createHumanoid<Buffy>(Position(x, y)));
}

void Field::accept(RoleVisitor &visitor) {
    for (auto &humanoid : _humanoids) {
        humanoid->accept(visitor);
    }
}

std::size_t Field::getWidth() const {
    return _width;
}

std::size_t Field::getHeight() const {
    return _height;
}

const std::list<Humanoid*> &Field::getHumanoids() const {
    return _humanoids;
}

std::vector<Position> Field::getAdjacentPositions(const Position &position) const {
    std::vector<Position> adjacentPositions;
    adjacentPositions.reserve(9);

    size_t minX = position.getX() > 1 ? position.getX() - 1 : 0;
    size_t minY = position.getY() > 1 ? position.getY() - 1 : 0;
    size_t maxX = position.getX() + 1 < getWidth() ? position.getX() + 1 : getWidth() - 1;
    size_t maxY = position.getY() + 1< getHeight() ? position.getY() + 1 : getHeight() - 1;

    for (size_t x = minX; x <= maxX; x++) {
        for (size_t y = minY; y <= maxY; y++) {
                adjacentPositions.emplace_back(x, y);
        }
    }
    adjacentPositions.shrink_to_fit();
    return adjacentPositions;
}

unsigned Field::nextTurn()
{
    // Déterminer les prochaines actions
    for (auto & _humanoid : _humanoids)
        _humanoid->setAction(*this);
    // Executer les actions
    for (auto & _humanoid : _humanoids)
        _humanoid->executeAction(*this);
    // Enlever les humanoides tués
    for (auto it = _humanoids.begin(); it != _humanoids.end(); )
        if (!(*it)->isAlive()) {
            delete *it;
            it = _humanoids.erase(it); // suppression de l’élément dans la liste
        }
        else
            ++it;
    return _turn++;
}

Humanoid* Field::getClosestHumanoid(const Humanoid &humanoid, const std::type_info &type) const {

    Humanoid* closestHumanoid = nullptr;
        for (Humanoid* humanoidOnBoard : _humanoids) {
            if (type == typeid(*humanoidOnBoard->getRole())) {
                if (closestHumanoid == nullptr || humanoidOnBoard->getPosition().getEuclideanDistance(humanoid.getPosition()) <
                                        closestHumanoid->getPosition().getEuclideanDistance(humanoid.getPosition())) {
                    closestHumanoid = humanoidOnBoard;
                }
            }
        }
    return closestHumanoid;
}

