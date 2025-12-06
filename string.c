/*Use function strcmp to compare two strings input by the user.
 After comparing string also state whether the first string is less than, equal
to or greater than the second string.*/

#include <stdio.h>
#include <string.h>
int main() {
  // variablres
  char str[500];
  char str2[500];
  // input
  printf("input string #1:");
  scanf("%s", str);

  printf("input string #2:");
  scanf("%s", str2);

  // comparision
  int comparision = strcmp(str, str2);

  // condition for comparision of strings
  if (comparision == 0)
    printf("both of the strings are equal!\n");

  else if (comparision > 0)
    printf("string 1 is greater then string 2!\n");
  else
    printf("string 2 is greater then string 1!\n");
}