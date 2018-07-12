#include <iostream>
#include <iomanip>

using namespace std;


int main() {
int n1, n2, n3, n4, n5;
  std::cout << "Enter five integers separated by space: ";
  std::cout << std::setw(2) << std::endl;
  std::cin >> n1 >> n2 >> n3 >> n4 >> n5 >> std::setw(2);

int sum = n1 + n2 + n3 + n4 + n5;
float avg = sum / 5.0f;

std::cout << "The sum of the five numbers you've inserted is: " << sum << std::endl;
std::cout << "The average value of the 5 numbers you've inserted is: " << avg << std::endl;

return 0;
}
