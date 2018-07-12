#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int number;
  std::cout << "Enter an integer: " << std::endl;


for(;;) {

//input in std namespace is written as follows:
  std::cin >> number;

// so we'll set the output as:

  int squared = number * number;
  std::cout << "The squared number of your input is " << std::setw (2) << squared << std::endl;
  //  or even std::cout << "Squared number" << "is" << number * number << endl;
}




  return 0;
}
