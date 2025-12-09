#include <stdio.h>
float intelligence(int a, float b) {
  float i = 2 + (a + .5 * b);
  return i;
}
int main() {
  printf("------------------------------\n");
  printf("|  x     |    y     |   i     | \n");
  // variables

  // loop #1
  for (int i = 1; i <= 6; i++) {
    // loop#2
    for (float j = 5.5; j <= 12.5; j += .5) {
      float temp = intelligence(i, j);

      printf("-------------------------------\n");
      printf("   %d     |   %.2f      |    %.2f  \n", i, j, temp);
    }
  }
}