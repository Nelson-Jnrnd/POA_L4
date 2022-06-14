#include <iostream>
#include "Roles/Human.hpp"
#include "Roles/Vampire.hpp"
#include "Roles/Buffy.hpp"
#include "Console/StreamField.hpp"
#include "Simulation/Simulation.hpp"

int main() {

    std::cout << "- Test Labo 4 - " << std::endl;

    Simulation simulation;

    //simulation.graphicSimulate(std::cout, 50, 50, 20, 10, 1);

    simulation.simulate(100, 100, 20, 10, 1, 100);
    return EXIT_SUCCESS;
}
