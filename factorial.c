//program to find factorial
#include<stdio.h>
int main(){
//variables
int num,i,fact;
//input
printf("input a number:");
scanf("%d",&num);
fact=1;
//operation
for(i=1;i<=num;i++){
    fact=fact*i;
}
printf("The factorial is:%d",fact);
return 0;
}
