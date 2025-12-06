#include<stdio.h>
int main(){
//variables
int  num,i,mod,square;

//operation
do{
    printf("please input a Number:");
    scanf("%d",&num);


    //modulus 2 to find if even or odd
    mod=num%2;

    //final if conditions
    if(mod==0){
        //square
        square=num*num;
        //output
        printf("the square of the number %d is:%d\n\n",num,square);
            }
    else if(mod!=0){
        printf("The number is odd");
        break;
            }
}
while(1);

return 0;
}
