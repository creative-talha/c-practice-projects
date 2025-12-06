#include "/home/talha/Desktop/codes/array_upto_user_numbers.c"
#include <stdio.h>

int main() {
  double num;

  printf("Please enter a real number: ");
  scanf("%lf", &num);
  if (num < 0)
    num = -num;

  printf("The absolute value is %g\n", num);
  printf("%d", sum);

  return 0;
}
