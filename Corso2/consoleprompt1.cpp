#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int number;
  std::cout << "Enter an integer: " << std::endl;

//input in std namespace is written as follows:
  std::cin >> number;

  int squared = number * number;
  std::cout << "The squared number of your input is " << std::setw (2) << squared << std::endl;

  return 0;
}
