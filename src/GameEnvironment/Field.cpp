//
// Created by André on 02.06.2022.
//

#include "Field.h"
#include "../Entities/Human.h"

Field::Field(std::size_t width, std::size_t height) : _WIDTH(width), _HEIGHT(height), _humanoids(){}

void Field::addHuman(std::size_t x, std::size_t y) {
    _humanoids.push_back(std::make_unique<Human>(Position(x, y)));
}

void Field::accept(HumanoidVisitor &visitor) {
    for (auto &humanoid : _humanoids) {
        humanoid->accept(visitor);
    }
}

std::size_t Field::getWidth() const {
    return _WIDTH;
}

std::size_t Field::getHeight() const {
    return _HEIGHT;
}

const std::list<std::unique_ptr<Humanoid>> &Field::getHumanoids() const {
    return _humanoids;
}
