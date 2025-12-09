#include<stdio.h>
//global variables
int temp,value1,value2;

//swap function
void swap(int a, int b){
temp=a;
a=b;
b=temp;
printf("The values after swaping are:\nValue1:%d\nValue2:%d",a,b);
}

int main(){
//input
printf("Please input any integer value:");
int v1=scanf("%d",&value1);

printf("Please input any 2nd integer value:");
int v2=scanf("%d",&value2);

//validity
if(v1+v2!=2){
    printf("Invalid input!");
    return 1;
}

//swap function calling
swap( value1,value2);

return 0;


}
