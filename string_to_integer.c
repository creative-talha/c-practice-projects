
#include <stdio.h>
#include <string.h>
int main() {
  char arr[] = "123";
  int temp = 1;
  int num = 0;
  for (int i = strlen(arr) - 1; i >= 0; i--) {

    num = num + (arr[i] - 48) * temp;
    temp *= 10;
  }

  printf("%d ", num);
}
