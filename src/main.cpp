#include <iostream>
#include "Roles/Human.hpp"
#include "Roles/Vampire.hpp"
#include "Roles/Buffy.hpp"
#include "Console/StreamField.hpp"
#include "Simulation/Simulation.hpp"

int main() {

    std::cout << "- Test Labo 4 - " << std::endl;


    Simulation::graphicSimulate(std::cout, 10, 10, 10, 1, 0);

    Simulation::simulate(100, 100, 20, 10, 1, 1000);
    return EXIT_SUCCESS;
}
