
// Use an int pointer and an int variable and displays the variable's address.
#include <stdio.h>
int main() {
  // variables
  int val;
  int *p = &val;
  // printing variable address
  printf("The address of variable is:%p\n", p);
}