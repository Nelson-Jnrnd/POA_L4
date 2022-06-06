#include "Eliminate.h"

Eliminate::Eliminate(Humanoid *humanoid) : Action(humanoid){}

void Eliminate::execute(Field &field) {
   humanoid->kill();
}