//program to check prime number
#include<stdio.h>
int main(){
//variables
int num,mod,i,division;
//input
printf("please enter the number:");
scanf("%d",&num);
division=0;

//operation
for(i=2;i<num;i++){
   mod=num%i;
    if(mod==0)
        division++;


}
if(num==1 || num==0)
    printf("The number is neither prime nor composite!");

else if(division==0)
    printf(" prime");
else
   printf("not prime");
}
