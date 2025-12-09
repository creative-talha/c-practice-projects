#include<stdio.h>
int main(){
//variables
int n=4,i=4,j=2,mod;

//some already prime numbers
printf("The number 2 is prime!\n");
printf("The number 3 is prime!\n");

//operation
while(i<=300){
    j=2;

    while(j<n){
        mod=n%j;
        if(mod==0)
        break;
        j++;
                }

    if(mod!=0)
        printf("The number %d is prime\n", n);

    n++;
    i++;
    }
    }






