#include <iostream>
#include "Roles/Human.hpp"
#include "Roles/Vampire.hpp"
#include "Roles/Buffy.hpp"
#include "Console/StreamField.hpp"
#include "Simulation/Simulation.hpp"

int main(int argc, char **argv) {

    int width, height, nbHumans, nbVampires, nbBuffy;
    if (argc != 5) {
        std::cout << "ERROR : Program parameters are width, height, nbHumans, nbVampires" << std::endl;
        return EXIT_FAILURE;
    }

    width = atoi(argv[1]);
    height = atoi(argv[2]);
    nbHumans = atoi(argv[3]);
    nbVampires = atoi(argv[4]);
    nbBuffy = 1;

    if(width < 0 || height < 0 || nbHumans < 0 || nbVampires < 0) {
        std::cout << "ERROR : Values can't be negative" << std::endl;
        return EXIT_FAILURE;
    }
    Simulation::stepByStepSimulation(std::cout, width, height, nbHumans, nbVampires, nbBuffy);

    return EXIT_SUCCESS;
}
