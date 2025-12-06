#include <stdio.h>
struct student {
  char name[20];
  int age;
  char grade;
};

int main() {
  struct student s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
  struct student arr[10];

  // input
  for (int i = 0; i < 10; i++) {
    printf("\nSTUDENT#%d\n\n", i + 1);
    // name
    printf("Please enter name:");
    scanf("%s", arr[i].name);
    // age
    printf("Please enter age:");

    scanf("%d", &arr[i].age);
    // grade
    printf("Please enter grade:");
    scanf(" %c", &arr[i].grade);
  }

  // output
  for (int k = 0; k < 10; k++) {
    printf("\n\n\nTAPE#%d\n", k + 1);
    printf("Name:%s\n", arr[k].name);
    printf("Age:%d\n", arr[k].age);
    printf("Grade:%d\n", arr[k].grade);
  }
}
