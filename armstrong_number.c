#include <stdio.h>

int main() {
  // variables
  int number, mod, octa_number = 0, i = 1;
  // input
  printf("Please input the number:");
  scanf("%d", &number);
  // loop
  while (number != 0) {
    mod = number % 8;
    number = number / 8;
    octa_number = octa_number + (mod * i);
    i = i * 10;
  }
  printf("The octal number  is %d :", octa_number);
}
