// Commas operators

#include <iostream>

using namespace std;

int main () {
  int x = 2, y = 3;
  if (x > 4, y > 1) // it takes ONLY the second part of the construct!
  {
    std::cout << "Is 2 greater than 4? REALLY?" << std::endl;
  }



// Conditions nesting


if (A) {
  some code
  if (C) {
    else if (D) {

    }
  }
}
else if (B) {
  else if (E) {
    else if (F){
      
    }
  }
}









  return 0;
}
