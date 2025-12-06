#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//struct
struct Student{
    char name[50];
    char major[50];
    int age;
    float gpa;

};
int main(){
    struct Student student1;
    scanf("%s", &student1.name);
    printf("%s",student1.name);
    strcpy(student1.major,"Computer science");
    printf("%s",student1.major);
    return 0;
}
