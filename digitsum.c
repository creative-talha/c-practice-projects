#include<stdio.h>
int main(){
    //variables
    int num,num1,num2,num3,num4,num5,add;
    //input
    printf("Please enter 5 digit number :");
    scanf("%d", &num);

    //operations
    //seperating the digits
    num1=num%10;
    num=num/10;

    num2=num%10;
    num=num/10;

    num3=num%10;
    num=num/10;

    num4=num%10;
    num=num/10;

    num5=num%10;
    num=num/10;

    //adding the digits
    add=num1+num2+num3+num4+num5;
    //output
    printf("The sum of the 5 digits is:%d",add);

    return 0;

}
