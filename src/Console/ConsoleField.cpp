//
// Created by NelsonWork on 06.06.2022.
//

#include "ConsoleField.hpp"

ConsoleField::ConsoleField(std::ostream &stream, std::size_t width, std::size_t height)
: Field(width, height), _output(stream), _displayer() {
    _field = std::vector<std::vector<char>>(Field::getHeight(), std::vector<char>(Field::getWidth(), _emptyCell));
}

void ConsoleField::update() {
    for (auto &humanoid : Field::getHumanoids()) {
        humanoid->accept(_displayer);
        _field[humanoid->getPosition().getY()][humanoid->getPosition().getX()] = _displayer.getOutputChar();
    }
}

void ConsoleField::print() {
    for (auto &row : _field) {
        for (auto &cell : row) {
            _output << cell;
        }
        _output << std::endl;
    }
}
