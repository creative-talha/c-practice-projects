//program that gives the smallest notes for an input number that is multiple of 10
#include<stdio.h>
int main(){
//variables
int n10,n20,n50,n100,n500,n1000,num;
//input
printf("Input a number that is multiple of 10:");
scanf("%d", &num);
//operation
n1000=num/1000;
num=num%1000;

n500=num/500;
num=num%500;

n100=num/100;
num=num%100;

n50=num/50;
num=num%50;

n20=num/20;
num=num%20;

n10=num/10;
//output
printf("The number of smallest notes possible of the N number are:\n1000:%d\n500:%d\n100:%d\n50:%d\n20:%d\n10:%d",
        n1000,n500,n100,n50,n20,n10);
return 0;
}
