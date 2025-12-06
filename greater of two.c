#include<stdio.h>

//function
float greater(float a,float b,float large){
//number 1
if(a>b)
    large=a;
else
    large=b;

    return large;
}

int main(){
//variables
float num1,num2,large;
//input
printf("please input number 1:");
int v1=scanf("%f",&num1);

printf("please input number 2:");
int v2=scanf("%f",&num2);

//validity
if((v1+v2)!=2){
    printf("Invalid input in any number!\n");
    return 1;
}

float temp=greater(num1,num2,large);

printf("The larger number is:%.2f",temp);
return 0;

}
