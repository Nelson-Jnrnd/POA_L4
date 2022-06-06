#include "Move.h"

Move::Move(Humanoid* humanoid, Position destPos) : Action(humanoid), destPos(destPos){}

void Move::execute(Field &field) {
   humanoid->setPosition(destPos);
}