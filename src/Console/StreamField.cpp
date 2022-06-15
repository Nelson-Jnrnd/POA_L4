#include "StreamField.hpp"

const char StreamField::EMPTY_CELL = ' ';
const char StreamField::HORIZONTAL_BORDER = '-';
const char StreamField::VERTICAL_BORDER = '|';
const char StreamField::EDGE_BORDER = '+';


StreamField::StreamField(std::ostream &stream, std::size_t width, std::size_t height)
: Field(width, height), _output(stream) {
    // Initialize the field with empty cells.
    _field = std::vector<std::vector<char>>(Field::getHeight(), std::vector<char>(Field::getWidth(), EMPTY_CELL));
}

void StreamField::update() {
    // Clear the field.
    for (std::size_t y = 0; y < Field::getHeight(); y++) {
        for (std::size_t x = 0; x < Field::getWidth(); x++) {
            _field[y][x] = EMPTY_CELL;
        }
    }

    for (auto &humanoid : Field::getHumanoids()) {
        humanoid->getRole()->accept(_displayer);
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
    printCommand();
}

void StreamField::printHorizontalBorder() const{
    _output << EDGE_BORDER << std::string(getWidth(), HORIZONTAL_BORDER) << EDGE_BORDER << std::endl;
}

unsigned int StreamField::nextTurn() {
    turn = Field::nextTurn();
    update();
    return turn;
}

void StreamField::printCommand() const {
   _output << "[" << getTurn() << "] / q->Quit / s->Statistic / n->Next Turn : " << std::endl;
}

unsigned StreamField::getTurn() const {
   return turn;
}


