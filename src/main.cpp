#include <iostream>
#include "Entities/Human.h"
#include "Entities/Vampire.h"
#include "Entities/Buffy.h"
#include "Console/HumanoidDisplayer.hpp"
#include "Console/ConsoleField.hpp"


int main() {

    std::cout << "- Test Labo 4 - " << std::endl;

    ConsoleField field(std::cout, 10, 10);

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
    return 0;
}
