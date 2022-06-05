//
// Created by NelsonWork on 06.06.2022.
//

#include "HumanoidDisplayer.hpp"

HumanoidDisplayer::HumanoidDisplayer() {
}

void HumanoidDisplayer::visit(Human &human) {
    std::cout << "H" << std::endl;
}

void HumanoidDisplayer::visit(Vampire &vampire) {
    std::cout << "V" << std::endl;
}

void HumanoidDisplayer::visit(Buffy &buffy) {
    std::cout << "B" << std::endl;
}
