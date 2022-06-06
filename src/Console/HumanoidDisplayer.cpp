//
// Created by NelsonWork on 06.06.2022.
//

#include "HumanoidDisplayer.hpp"

HumanoidDisplayer::HumanoidDisplayer() :  _outputChar(){}

void HumanoidDisplayer::visit(Human &human) {
    _outputChar = 'H';
    //_output << "H" << std::endl;
}

void HumanoidDisplayer::visit(Vampire &vampire) {
    _outputChar = 'V';
    //_output << "V" << std::endl;
}

void HumanoidDisplayer::visit(Buffy &buffy) {
    _outputChar = 'B';
    //_output << "B" << std::endl;
}

char HumanoidDisplayer::getOutputChar() const {
    return _outputChar;
}


