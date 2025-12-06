#include<stdio.h>
int main(){
//variables
int num,mod;
//input
printf("Input the number:");
scanf("%d",&num);
//operation
mod=num%2;
if(mod==1)
    printf("The number is odd");
else
    printf("The number is even");

return 0;
}
