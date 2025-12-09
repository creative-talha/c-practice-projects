#include <stdio.h>
int main() {
  int array[5][5] = {{11, 1, 7, 9, 7},
                     {13, 54, 56, 2, 5},
                     {23, 43, 89, 22, 13},
                     {14, 15, 17, 16, 19},
                     {45, 3, 6, 100, 10}};
  int i, num, k, big = 0;
  for (i = 0; i <= 4; i++)
    for (k = 0; k <= 4; k++) {
      num = array[i][k];
      if (num > big)
        big = num;
    }
  printf("Tha largest number among the array is:%d\n", big);
}