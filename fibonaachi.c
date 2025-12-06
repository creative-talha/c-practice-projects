#include<stdio.h>
int main(){
//variables
int n,n1=0,n2=1,n3;
//input
printf("please enter the fibbonachi number:");
int v=scanf("%d",&n);
//validity
if(v!=1){
    printf("The input is not a number");
    return 1;}
//operation

    while(n1<n&&n2<=n){
    //calculation
    n1=n1+n2;
    n2=n1+n2;
    //output
    if(n1<=n){
        printf("%d,",n1);}
    if(n2<=n){
        printf("%d,",n2);}
    }
    return 0;}
