#include <iostream>
#include "Entities/Human.h"
#include "Entities/Vampire.h"
#include "Entities/Buffy.h"
#include "Console/HumanoidDisplayer.hpp"


int main() {

    std::cout << "- Test Labo 4 - " << std::endl;
    // Creates a human
    Human human;
    Vampire vampire;
    Buffy buffy;

    // Creates a HumanoidDisplayer
    HumanoidDisplayer humanoidDisplayer;

    // Visits the human
    humanoidDisplayer.visit(human);

    // Visits the vampire
    humanoidDisplayer.visit(vampire);

    // Visits the buffy
    humanoidDisplayer.visit(buffy);

    return 0;
}
