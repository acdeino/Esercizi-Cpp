#include <iostream>
#include <iomanip>

int main () {

  int year = 2018, mon = 3, day = 6;
  //char date = Tuesday;

  std::cout << "Today is "
  << std::setw (2) << std::setfill ('0') << day
  << "-"
  << std::setw (1) << std::setfill ('0') << mon
  << "-"
  << std::setw (2) << year
  << "." << std::endl;

  return 0;
}
