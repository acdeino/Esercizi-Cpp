#include <iostream>
#include <cmath>

using namespace std;

int main () {

  int n;

  do {
  cout << "Enter natural number: ";
  cin >> n;
}

  while( n <= 0);

  double sqrt_n = std::sqrt(n);

  cout << "sqrt (" << n << ") = " << sqrt_n << std::endl;


system("pause");
return 0;
}
