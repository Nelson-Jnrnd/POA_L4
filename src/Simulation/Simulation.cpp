//
// Created by NelsonWork on 08.06.2022.
//

#include <iostream>
#include "Simulation.hpp"
#include "../Random/Random.hpp"
#include "../Roles/Vampire.hpp"
#include "../Roles/Human.hpp"

Simulation::Simulation(int width, int height) : _field(std::make_unique<Field>(width, height)) {}

bool Simulation::simulate(int nbHumans, int nbVampires, int nbBuffy) {
    Random& random = Random::getInstance();
    _field = std::make_unique<Field>(_field->getWidth(), _field->getHeight());

    for (int i = 0; i < nbHumans; i++) {
        _field->addHuman(random.getRandomInt(0, _field->getWidth()), random.getRandomInt(0, _field->getWidth()));
    }
    for (int i = 0; i < nbVampires; i++) {
        _field->addVampire(random.getRandomInt(0, _field->getWidth()), random.getRandomInt(0, _field->getWidth()));
    }
    for (int i = 0; i < nbBuffy; i++) {
        _field->addBuffy(random.getRandomInt(0, _field->getWidth()), random.getRandomInt(0, _field->getWidth()));
    }
    while (true) {
        if(_field->getNumberOfHumanoid(typeid(Human)) == 0)
            return true;
        if(_field->getNumberOfHumanoid(typeid(Vampire)) == 0)
            return false;
        _field->nextTurn();
    }
}

void Simulation::simulate(int nbHumans, int nbVampires, int nbBuffy, int nbSimulations) {
    int nbTimesHumanWon = 0;
    for (int i = 0; i < nbSimulations; i++) {
        std::cout << "Simulation " << i << std::endl;
        if(simulate(nbHumans, nbVampires, nbBuffy))
            nbTimesHumanWon++;
    }
    std::cout << "Human won " << nbTimesHumanWon << " times out of " << nbSimulations << " simulations" << std::endl;
    std::cout << "Human won " << (double)nbTimesHumanWon / nbSimulations * 100 << "% of the time" << std::endl;
}
