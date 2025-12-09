#include <stdio.h>
// gloabal variable
int c;
// seperating every digit function
int seperate() {
  int b = c % 10;
  c = c / 10;
  return b;
}
int main() {
  // variables
  int i, digit, arm = 0, d = 1;
  // loop
  for (i = 0; i <= 500; i++) {
    arm = 0;
    c = i;
    while (c != 0) {
      digit = seperate();
      arm = arm + (digit * digit * digit);
    }

    if (arm == i)
      printf("the number %d is armstrong number!\n ", i);
  }
  return 0;
}
