#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  for (;;) {

  signed int n;
  std::cout << "Enter an integer: ";
  std::cin >> n;

  if(n > 1 && n < 10) {
    std::cout << "The number you've inserted is greater than 1 but smaller than 10" << std::setw (2) << "\n" << std::endl;
  }
  else if (n < 0) {
    std::cout << "The number you've inserted is negative, and/or below zero" << std::setw (2) << "\n" << std::endl;
  }
  else if (n > 10) {
    std::cout << "The number you've inserted is greater than 10" << std::setw (2) << "\n" << std::endl;
  }
}


system ("pause");
return 0;
}
