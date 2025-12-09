#include <stdio.h>
int main() {
  // array
  int input[8];
  // input
  for (int i = 0; i < 8; i++) {
    printf("PLease input value#%d:", i + 1);
    scanf("%d", &input[i]);
  }
  // printing in reverse order
  for (int k = 7; k >= 0; k--)
    printf("%d\n", input[k]);
}