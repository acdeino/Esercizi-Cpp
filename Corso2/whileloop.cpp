#include <iostream>

using namespace std;

int main () {

  /* while(condition) {
  code continues to be executed, until...
} */
 int n;
 float avg;

 cout << "Enter a number: ";
 cin >> n;

 int sum = 0;
 int i = 1;

 while (i <= n) {
   int number;
   cout << "Enter a " << i << ". number: ";
   cin >> number;

   sum += number;
   ++i;

   avg = sum / number;

 }

 cout << "Sum of " << n << " entered numbers is: " << sum << endl;
 cout << "Average value of " << n << " entered numbers is: " << avg << endl;



return 0;
}
