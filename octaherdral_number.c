#include <stdio.h>
int main() {
  // variables
  int number = 0, large, small;
  // loop
  printf("for no more inputs enter \n\n\n");
  printf("Please input a number:");
  printf("for no more inputs enter \n\n\n");
  scanf("%d", &number);
  large = number;
  small = number;
  while (number != 110) {
    // input

    printf("Please input a number:");
    scanf("%d", &number);
    printf("%d", 'n');
    if (number != 110) {
      if (number > large)
        large = number;
      else if (number < small)
        small = number;
    }
  }
  printf("%d\n%d", small, large);
}
