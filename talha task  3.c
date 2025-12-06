#include<stdio.h>
int main(){
//variables}
int marks;
//input
printf("please input the marks:");
scanf("%d", &marks);
//operation(switch statement)
switch(marks){

 case 90:
     printf("The grade is:A");
     break;

case 80 :
     printf("The grade is:B");
     break;

case 70 :
     printf("The grade is:C");
     break;

case 60 :
     printf("The grade is:D");
     break;}
     return 0;

}
