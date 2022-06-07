#include <iostream>
#include "Roles/Human.hpp"
#include "Roles/Vampire.hpp"
#include "Roles/Buffy.hpp"
#include "Console/StreamField.hpp"

int main() {

    std::cout << "- Test Labo 4 - " << std::endl;

    StreamField field(std::cout, 10, 5);

    field.getAdjacentPositions(Position(0, 1));

    std::cout << "Empty Field" << std::endl;
    field.print();

    std::cout << "Adding Human" << std::endl;
    field.addHuman(9, 1);
    field.update();
    field.print();

    std::cout << "Adding Vampire" << std::endl;
    field.addVampire(9, 3);
    field.update();
    field.print();

    std::cout << "Adding Buffy" << std::endl;
    field.addBuffy(9, 4);
    field.update();
    field.print();

    while(field.nextTurn() < 10)
        field.print();
    return EXIT_SUCCESS;
}
