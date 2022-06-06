//
// Created by André on 02.06.2022.
//

#include "Field.h"
#include "../Entities/Human.h"
#include "../Entities/Vampire.h"
#include "../Entities/Buffy.h"

Field::Field(std::size_t width, std::size_t height) : _width(width), _height(height), _humanoids(){}

void Field::addHuman(std::size_t x, std::size_t y) {
    _humanoids.push_back(std::make_unique<Human>(Position(x, y)));
}

void Field::addVampire(std::size_t x, std::size_t y) {
    _humanoids.push_back(std::make_unique<Vampire>(Position(x, y)));
}

void Field::addBuffy(std::size_t x, std::size_t y) {
    _humanoids.push_back(std::make_unique<Buffy>(Position(x, y)));
}

void Field::accept(HumanoidVisitor &visitor) {
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

const std::list<std::unique_ptr<Humanoid>> &Field::getHumanoids() const {
    return _humanoids;
}

