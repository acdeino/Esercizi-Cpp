// Conditions and branching

#include <iostream>

using namespace std;

int main() {

  int x = 10;
  if(x > 6) {
    std::cout << "X is greater than 6" << std::endl;
  } if (10) {
    std::cout << "10 is also true" << std::endl;
  } if (-4) {
    std::cout<< "-4 is also true" << std::endl;
  } if (1.5) {
    std::cout << "Is 1.5 true? Yes, it is." << "\n" << "EVERYTHING NOT ZERO IS TRUE AND PRINTED" << std::endl;
  } if (0) {
    std::cout << "What happens here? NOTHING, because the if-construct is ZERO" << std::endl;
  } if(10 > 5) {
    std:cout << "Is 10 greater than 5? TRUE." << std::endl;
  } if (3 > 7) {
    std::cout << "Is 5 greather than 7? FALSE, therefore this line WILL NOT BE PRINTED" << std::endl;
  } if (x > 10) {
    std::cout << "X is greather than 10" << std::endl;
  } else {
    std::cout << "X is not greater than 10" << std::endl;
  }

  if (x >10) {
    std::cout << "X is greater than 10" << std::endl;
  }
  // int y = 10; /this is gonna give an error, because you can't insert anything between the else and the if cycle
  else {
    std::cout << "X is not greater than 10" << std::endl;
  }

  if (x > 2)
    std::cout << "Okay, X is greater than 2" << std::endl;
    // the compiler could build the program even if curly brackets are missing from the THEN instruction


return 0;
}
