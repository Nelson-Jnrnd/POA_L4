#include <iostream>
#include "Roles/Human.hpp"
#include "Roles/Vampire.hpp"
#include "Roles/Buffy.hpp"
#include "Console/StreamField.hpp"
#include "Simulation/Simulation.hpp"

int main() {

   int width, height, nbHumans, nbVampires, nbBuffy;
   std::cout << "- Test Labo 4 - " << std::endl;

   std::cout << "Enter width of field : " << std::endl;
   std::cin >> width;

   std::cout << "Enter height of field : " << std::endl;
   std::cin >> height;

   std::cout << "Enter number of humans in field : " << std::endl;
   std::cin >> nbHumans;

   std::cout << "Enter number of vampires in field : " << std::endl;
   std::cin >> nbVampires;

   std::cout << "Enter number of Buffy in field : " << std::endl;
   std::cin >> nbBuffy;

   Simulation::stepByStepSimulation(std::cout,width,height,nbHumans,nbVampires,nbBuffy);

   return EXIT_SUCCESS;
}
