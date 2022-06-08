//
// Created by NelsonWork on 08.06.2022.
//

#include <iostream>
#include "Simulation.hpp"
#include "../Random/Random.hpp"
#include "../Roles/Vampire.hpp"

Simulation::Simulation(int width, int height) : _field(width, height) {}

void Simulation::simulate(int nbHumans, int nbVampires, int nbBuffy) {
    Random& random = Random::getInstance();
    for (int i = 0; i < nbHumans; i++) {
        _field.addHuman(random.getRandomInt(0, _field.getWidth()), random.getRandomInt(0, _field.getWidth()));
    }
    for (int i = 0; i < nbVampires; i++) {
        _field.addVampire(random.getRandomInt(0, _field.getWidth()), random.getRandomInt(0, _field.getWidth()));
    }
    for (int i = 0; i < nbBuffy; i++) {
        _field.addBuffy(random.getRandomInt(0, _field.getWidth()), random.getRandomInt(0, _field.getWidth()));
    }
    while (_field.getNumberOfHumanoid(typeid(Vampire)) > 0) {
        std::cout << (_field.nextTurn()) << std::endl;
    }
}
