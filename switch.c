
//program for commenting on grade
#include<stdio.h>
int main(){
    //variable
    char grade;
    //input
    printf("Plz input the grade:");
    scanf(" %c", &grade);
    //operation
    switch(grade){
    case  'A':
    printf("You did very great");
    break;

    case 'B':
    printf("You did good");
    break;

    case 'C':
    printf("You did average");
    break;

    case 'D':
    printf("You did poor");
    break;

    case 'F':
    printf("You failed");
    break;

    default :
    printf("Invalid statement");
    }

    return 0;
}
