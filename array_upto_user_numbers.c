/*Declare and initialize an array of size taken from user as input, display
array values on screen and find sum of array elements and finally display the
summation result*/
int sum;
#include <stdio.h>
int main() {
  // variables
  int size;

  // size
  printf("Input the size of the array:");
  scanf("%d", &size);
  printf("\n\n");

  // array initialization and decleration
  int elements[size];
  for (int i = 0; i < size; i++) {
    printf("Value#%d:", i + 1);
    scanf("%d", &elements[i]);
  }

  sum = elements[0];
  for (int i = 1; i < size; i++) {
    sum = sum + elements[i];
  }

  printf("The sum of the arrays number is:%d\n", sum);
}
