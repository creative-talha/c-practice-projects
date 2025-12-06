/*Write a program that keeps track of 10 student names, ages and grades. Use 10
different structure variable names and get the data for the students in for loop
from the keyboard. Print the data on the printer when the teacher finishes
entering the information for all the students.*/
#include <stdio.h>
struct student {
  char name[20];
  int age;
  char grade;
};

int main() {
  struct student s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
  struct student arr[10] = {s1, s2, s3, s4, s5, s6, s7, s8, s9, s10};

  // input
  for (int i = 0; i <= 10; i++) {
    printf("STUDENT#%d\n\n", i + 1);
    // name
    printf("Please enter name:");
    scanf("%s", arr[i].name);
    // age
    printf("Please enter age:");
    scanf("%d", &arr[i].age);
    // grade
    printf("Please enter grade:");
    scanf("%c", &arr[i].grade);
  }

  // output
  for (int k = 0; k < 11; k++) {
    printf("\n\n\nTAPE#%d\n", k + 1);
    printf("Name:%s\n", arr[k].name);
    printf("Age:%d\n", arr[k].age);
    printf("Grade:%d\n", arr[k].grade);
  }
}
