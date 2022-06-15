#include <iostream>
#include "Roles/Human.hpp"
#include "Roles/Vampire.hpp"
#include "Roles/Buffy.hpp"
#include "Console/StreamField.hpp"
#include "Simulation/Simulation.hpp"

int main() {

    std::cout << "- Test Labo 4 - " << std::endl;


    Simulation::stepByStepSimulation(std::cout,50,50,10,10,1);



    return EXIT_SUCCESS;
}
