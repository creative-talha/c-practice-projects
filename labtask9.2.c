// Receive input from user, store it in integer variable display what the user
// entered, via the variable's address.
#include <stdio.h>
int main() {

  // variables
  int input;
  int *p = &input;

  // input
  printf("Please enter the integral value");
  scanf("%d", &input);

  // printing the value through the variable address
  printf("The value is:%d\n", *p);

  // the value can also be represented in such way
  printf("the value can also be represented in such way!\n ");
  printf("The value is:%d\n", *(&input));
}