//
// Created by NelsonWork on 06.06.2022.
//

#include "HumanoidDisplayer.hpp"

HumanoidDisplayer::HumanoidDisplayer() :  _outputChar(){}

void HumanoidDisplayer::visit(Human &human) {
    _outputChar = 'H';
}

void HumanoidDisplayer::visit(Vampire &vampire) {
    _outputChar = 'V';
}

void HumanoidDisplayer::visit(Buffy &buffy) {
    _outputChar = 'B';
}

char HumanoidDisplayer::getOutputChar() const {
    return _outputChar;
}


