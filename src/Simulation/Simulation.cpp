//
// Created by NelsonWork on 08.06.2022.
//

#include <iostream>
#include "Simulation.hpp"
#include "../Random/Random.hpp"
#include "../Roles/Vampire.hpp"
#include "../Roles/Human.hpp"
#include "../Console/StreamField.hpp"

bool Simulation::simulate(int width, int height, int nbHumans, int nbVampires, int nbBuffy) {
    Field field(width, height);

    populate(field, nbHumans, nbVampires, nbBuffy);
    while (true) {
        if (field.getNumberOfHumanoid(typeid(Human)) == 0)
            return false;
        if (field.getNumberOfHumanoid(typeid(Vampire)) == 0)
            return true;
        field.nextTurn();
    }
}

void Simulation::simulate(std::ostream &output, int width, int height, int nbHumans, int nbVampires, int nbBuffy,
                          int nbSimulations) {
    int nbTimesHumanWon = 0;
    for (int i = 1; i <= nbSimulations; i++) {
        output << "Simulation " << i << std::endl;
        if (simulate(width, height, nbHumans, nbVampires, nbBuffy))
            nbTimesHumanWon++;
    }
    output << "Human won " << nbTimesHumanWon << " times out of " << nbSimulations << " simulations" << std::endl;
    output << "Human won " << (double) nbTimesHumanWon / nbSimulations * 100 << "% of the time" << std::endl;
}

void Simulation::populate(Field &field, int nbHumans, int nbVampires, int nbBuffy) {
    Random &random = Random::getInstance();

    for (int i = 0; i < nbHumans; i++) {
        field.addHuman(random.getRandomInt(0, field.getWidth()), random.getRandomInt(0, field.getWidth()));
    }
    for (int i = 0; i < nbVampires; i++) {
        field.addVampire(random.getRandomInt(0, field.getWidth()), random.getRandomInt(0, field.getWidth()));
    }
    for (int i = 0; i < nbBuffy; i++) {
        field.addBuffy(random.getRandomInt(0, field.getWidth()), random.getRandomInt(0, field.getWidth()));
    }
}

bool Simulation::stepByStepSimulation(std::ostream &output, int width, int height, int nbHumans, int nbVampires,
                                      int nbBuffy) {
    StreamField field(output, width, height);
    populate(field, nbHumans, nbVampires, nbBuffy);
    field.print();
    while (true) {
        printCommand(output, field);
        char input;

        std::cin >> input;

        switch (input) {
            case 'q':
                return EXIT_SUCCESS;

            case 's':
                simulate(output, width, height, nbHumans, nbVampires, nbBuffy, 10000);
                break;

            case 'n':
                field.nextTurn();
                field.print();
                break;

            default:
                output << "Error : Wrong command input!" << std::endl;
                break;
        }

        if (field.getNumberOfHumanoid(typeid(Human)) == 0)
            return false;
        if (field.getNumberOfHumanoid(typeid(Vampire)) == 0)
            return true;

    }
}

void Simulation::printCommand(std::ostream &output, const Field &field) {
    output << "[" << field.getTurn() << "] / q->Quit / s->Statistic / n->Next Turn : " << std::endl;
}