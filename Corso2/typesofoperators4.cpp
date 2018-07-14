// Relational operators

#include <iostream>

int main () {

// These are relational operators:   >, >=, ==, !=, <=, <

/* PLEASE NOTE: = IS NOT (!=) THE SAME AS ==;
= is only an ASSIGNMENT operator
== is a MATHEMATICAL RELATIONAL operator */

int x = 10, y = 5, z = 15, w = 10;

bool rel1 = x > y;
// is 10 greater than 5? yes it is. Then the value it's true
// bool rel1 = true;

bool rel2 = y > x;
// is 5 greater than 10? No it isn't. Then the value is false
// bool rel2 = false;

bool rel3 = x == z;
 // is 10 equal to 15? No it isn't. Then the value is false.
// bool rel3 = false;

bool rel4 = x != z;
 // is 10 NOT-equal to 15? Yes it is. Then, the value is true.
// bool rel4 = true;

bool rel5 = x >= w;
 // is 10 greater-OR-equal to 10? Yes it is. Then, the value is true.
// bool rel5 = true;

bool rel6 = x <= w;
 /* is 10 less-OR-equal to 10? Yes it is. Then, the value is true. */
// bool rel6 = true;

bool rel7 = y >= z;
/* is 15 greater-OR-equal to 5? No it is not.
Then, the value is false.*/
// bool rel7 = false;

bool rel8 = !(x > w);
/* is NOT 10 greater than 10? Yes it is, because 10 is NOT greater than 10,
 therefore being that value false; But being the whole construct NOT, it
 becomes NOT-false, which means is true. */
// bool rel8 = true;

bool rel9 = 12 > x > 7;
// bool rel9 = false;
/* because the compiler works from left to right,
therefore considering 10 -the value of x- less than 12, which is true;
 Having that value 'true' which the compiler assumes equal to 1,
1 is NOT greater than 7, giving the final value of 'false'. */

bool rel10 = 12 > x  && x > 7;
/* here the compiler separates the the constructs
at the point where the double ampersand are,
therefore making the whole construct valid as 'true'. ( true + true = true) */
// bool rel10 = true;



return 0;
}
