#include "HumanoidDisplayer.hpp"

HumanoidDisplayer::HumanoidDisplayer() :  _outputChar(){}

void HumanoidDisplayer::visit(Human &human) {
    _outputChar = 'H';
}

void HumanoidDisplayer::visit(Vampire &vampire) {
    _outputChar = 'V';
}

void HumanoidDisplayer::visit(Buffy &buffy) {
    _outputChar = 'B';
}

char HumanoidDisplayer::getOutputChar() const {
   // implements of color to specific chars not completed
   /*switch (_outputChar) {
      case 'H':
         SetConsoleTextAttribute(charColor, FOREGROUND_RED);
         break;

      case 'V':
         SetConsoleTextAttribute(charColor, FOREGROUND_BLUE);
         break;

      case 'B':
         SetConsoleTextAttribute(charColor, FOREGROUND_GREEN);
         break;

      default:
         break;
   }*/
    return _outputChar;
}


