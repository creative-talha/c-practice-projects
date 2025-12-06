#include<stdio.h>
#include<math.h>
int main(){
    //variables

    float num1,num2;
    char op;
    //input
    printf("what is the number 1:");
    scanf("%f",&num1);

    printf("what is the operator:");
    scanf(" %c",&op);

    printf("what is the for  number 2:");
    scanf("%f",&num2);
    //operation
    if(op=='+')
    {printf("the answer for %.2f %c %.2f is : %.2f",num1,op,num2,num1+num2);}

    else if(op=='-')
    {printf("the answer for %.2f %c %.2f is : %.2f",num1,op,num2,num1-num2);}

    else if(op=='*')
    {printf("the answer  for %.2f %c %.2f is : %.2f",num1,op,num2,num1*num2);}

    else if(op=='/')
    {printf("the answer for %.2f %c %.2f is : %.2f",num1,op,num2,num1/num2);}

    else
    {printf("Invalid operators");}

    return 0;
}
