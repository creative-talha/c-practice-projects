#include <stdio.h>
int main() {
  int *j, *k;
  int num[4] = {2, 4, 12, 5};
  j = &num[0];
  k = &num[3];

  printf("%d ", sizeof(num));
  return 0;
}
