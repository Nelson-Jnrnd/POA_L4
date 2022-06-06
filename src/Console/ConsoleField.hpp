//
// Created by NelsonWork on 06.06.2022.
//

#ifndef POA_L4_CONSOLEFIELD_HPP
#define POA_L4_CONSOLEFIELD_HPP


#include <vector>
#include "../GameEnvironment/Field.h"
#include "HumanoidDisplayer.hpp"

/**
 * Represent a ConsoleField
 * @version 1.0
 * @date 06.06.2022
 * @author Nelson Jeanrenaud
 * @author 
 */
class ConsoleField : public Field {
    const char _emptyCell = ' ';
    HumanoidDisplayer _displayer;
    std::vector<std::vector<char>> _field;
    std::ostream &_output;
public:
    ConsoleField(std::ostream &stream, std::size_t width, std::size_t height);
    void print();
    void update();
};


#endif //POA_L4_CONSOLEFIELD_HPP
