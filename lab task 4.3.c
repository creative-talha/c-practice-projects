#include<stdio.h>
int main(){
//variables}
int  marks;
//input
printf("please input the marks:");
scanf("%d", &marks);
//operation(switch statement)
switch(marks){

 case 90 :
     printf("The grade is:A");
     break;

case 80 :
     printf("The grade is:A");
     break;

case 70 :
     printf("The grade is:A");
     break;

case 60 :
     printf("The grade is:A");
     break;
default :
    printf("Invalid input");
    break;
    }
    return 0;
    }
