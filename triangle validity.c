#include<stdio.h>
int main(){
//variables
float side1,side2,side3,large_side,combine;
int v;//validity variable
//input
printf("Please input the sides:");
v=scanf("%f%f%f",&side1,&side2,&side3);

//validity
if(v!=3){
    printf("Invalid value in any side");
    return 1;
    }//validity if

//operation

//finding the largest side
if(side1>side2&&side1>side3)
    large_side=side1;

if(side3>side1&&side3>side2)
    large_side=side3;

if(side2>side1&&side2>side3)
    large_side=side2;

//now finding the addition of the other side
combine=(side1+side2+side3)-large_side;

//now finding the validity

if(combine>large_side){
    printf("The triangle is valid!");
    return 0;
}

else{
    printf("The triangle is not valid!");
    return 0;
}

}//main
