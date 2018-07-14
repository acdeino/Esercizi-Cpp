// Logical operators

#include <iostream>
#include <string>

int main () {

  bool A = true; // or 1 instead of true
  bool B = false; // or 0 instead of false
       C = 0;
       D = 1;

// Logical AND operators

  bool and1 = A && D; //kinda like tables of truth: true + true = true
  bool and2 = A && C; // false + false = false
  bool and3 = A && B; // true + false = false
  bool and4 = A && B && C && D; // true + false + true + false = false
  // the operation goes in order from left to right

// Logical OR operators

  bool or1 = A || D; // true + true = true
  bool or2 = A || C; // false + false = false
  bool or3 = A || B; // true + false = true
  bool or4 = A || B || C || D; // true + false + true + false = false?
   // the operation goes in order from left to right



  bool and_or1 = A && B || C; // (true + false) + false = false
  bool and_or2 = C || (A && B && C && D); // false +( true + false + false + true) = false


// Logical NOT operators

  bool n1 = !A; // NOT true, therefore n1 = false
  bool n2 = !B; // NOT false, therefore n2 = true

  bool n3 = A && !C && D; // true + false(that becomes true) + true = true
  bool n4 = !A || !B || !C || !D; // true(that becomes false) + false(that becomes true) + true(that becomes false) + false(that becomes true) = true [being OR operators, they just need a TRUE value to validate the entire expression as TRUE]

}
