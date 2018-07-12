#include <iostream>

#define PI 3.14159

using namespace std;

int main () {
  int x = 5;

  const int y = 6;

  int const z = 100;
  const int w = 1;


cout << PI << endl;

cout << "Enter circle radius: ";
float radius;
cin >> radius;

float area = (radius * radius) * PI;
float perimeter = 2 * PI * radius;

cout << "The area of the circle is: " << area << endl;
cout << "The perimeter of the circle is " << perimeter << endl;

  return 0;
}
