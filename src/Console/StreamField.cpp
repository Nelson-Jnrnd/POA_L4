#include "StreamField.hpp"

const char StreamField::EMPTY_CELL = ' ';
const char StreamField::HORIZONTAL_BORDER = '-';
const char StreamField::VERTICAL_BORDER = '|';
const char StreamField::EDGE_BORDER = '+';


StreamField::StreamField(std::ostream &stream, std::size_t width, std::size_t height)
: Field(width, height), _output(stream), _displayer() {
    // Initialize the field with empty cells.
    _field = std::vector<std::vector<char>>(Field::getHeight(), std::vector<char>(Field::getWidth(), EMPTY_CELL));
}

void StreamField::update() {
    // TODO watch out, the humanoids are not removed if they were to move.
    for (auto &humanoid : Field::getHumanoids()) {
        humanoid->accept(_displayer);
        _field[humanoid->getPosition().getY()][humanoid->getPosition().getX()] = _displayer.getOutputChar();
    }
}

void StreamField::print() const{
    printHorizontalBorder();
    for (auto &row : _field) {
        _output << VERTICAL_BORDER;
        for (auto &cell : row) {
            _output << cell;
        }
        _output << VERTICAL_BORDER << std::endl;
    }
    printHorizontalBorder();
}

void StreamField::printHorizontalBorder() const{
    _output << EDGE_BORDER << std::string(getWidth(), HORIZONTAL_BORDER) << EDGE_BORDER << std::endl;
}
