#include<stdio.h>
int main(){
//variables
int n,mn;
//input
printf("enter the number:");
scanf("%d",&n);
//operation
mn=n&1;
//output in condition
if(mn==0){
        printf("The number is even\n");

    }
    if(mn==1){
        printf("The number id odd");
    }
    return 0;
}
