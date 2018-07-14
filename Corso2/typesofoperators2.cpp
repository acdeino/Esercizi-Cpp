#include <iostream>

using namespace std;

int main () {

  int age;
  std::cout << "Please insert your age: " << std::endl;
  std::cin >> age;

  if (age >= 18 && age < 21) {
    std::cout << "You are an adult, but unfortunately you can't still drink alcohol in the USA" << std::endl;
  }
   else if (age >= 21) {
    std::cout << "You are an adult and you can legally dring alcohol in the USA" << std::endl;
  }
   else if (age > 13) {
    std::cout << "You are a teenager" <<std::endl;
  }
   else if (age > 3 && age < 13) {
    std::cout << "You are a kid" << std::endl;
  }
   else if (age > 3) {
    std::cout << "You are a toddler. Really? You must be kidding me!" << std::endl;
  }
   /* else {
    std::cout << "You are such a grown-up, aren't you?" << std::endl;
  } */

return 0;
}
