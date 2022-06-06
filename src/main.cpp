#include <iostream>
#include "Entities/Human.h"
#include "Entities/Vampire.h"
#include "Entities/Buffy.h"
#include "Console/StreamField.hpp"

int main() {

    std::cout << "- Test Labo 4 - " << std::endl;

    StreamField field(std::cout, 10, 10);

    field.getAdjacentPositions(Position(0, 1));

    std::cout << "Empty Field" << std::endl;
    field.print();

    std::cout << "Adding Human" << std::endl;
    field.addHuman(1, 1);
    field.update();
    field.print();

    std::cout << "Adding another Human" << std::endl;
    field.addHuman(5, 3);
    field.update();
    field.print();

    std::cout << "Adding Vampire" << std::endl;
    field.addVampire(7, 7);
    field.update();
    field.print();

    std::cout << "Adding Buffy" << std::endl;
    field.addBuffy(2, 9);
    field.update();

    std::cout << "turn " << field.nextTurn() << std::endl;
    field.print();
    std::cout << "turn " << field.nextTurn() << std::endl;
    field.print();
    std::cout << "turn " << field.nextTurn() << std::endl;
    field.print();
    std::cout << "turn " << field.nextTurn() << std::endl;
    field.print();

    return EXIT_SUCCESS;
}
