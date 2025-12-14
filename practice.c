#include <stdio.h>
int main() {
  FILE *fp;
  int arr[4];
  fp = fopen("hi.txt", "r");

  fprintf(fp, "%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
  for (int i = 0; i <= 3; i++)
    printf("%d\n", arr[i]);

  fclose(fp);
}