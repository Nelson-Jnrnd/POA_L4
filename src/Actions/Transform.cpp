#include "Transform.h"
#include <stdlib.h>
#include "../Entities/Vampire.h"

Transform::Transform(Humanoid *human) : Action(human){}

void Transform::execute(Field &field) {
   int transformationChance = rand() % 2;

   if(transformationChance){
      Humanoid* convertedHuman = new Vampire(humanoid->getPosition());
      field.addVampire(convertedHuman->getPosition().getX(), convertedHuman->getPosition().getY());
   }

   humanoid->kill();
}