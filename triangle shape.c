#include<stdio.h>
#include<math.h>
int main(){

//variables
int side_1,side_2,side_3,longest,shortest,middle;

//input
printf("Please enter the value of side 1:");
scanf("%d",&side_1);

printf("Please enter the value of side 2:");
scanf("%d",&side_2);

printf("Please enter the value of side 3:");
scanf("%d",&side_3);

//longest side
if(side_1>side_2&&side_1>side_3)
    longest=side_1;

else if(side_2>side_1&&side_2>side_3)
    longest=side_2;

else
    longest=side_3;
//shortest and middle
if(side_1==longest){
    if(side_2>side_3){
        shortest=side_3;
        middle=side_2;
    }


    else{
        shortest=side_2;
        middle=side_3;
    }
}

if(side_2==longest){
    if(side_1>side_3){
        shortest=side_3;
        middle=side_1;
    }
    else{
        shortest=side_1;
        middle=side_3;
    }
}

if(side_3==longest){
    if(side_2>side_1){
        shortest=side_1;
        middle=side_2;
    }
    else{
        shortest=side_2;
        middle=side_1;
    }

}
int hyp=sqrt(pow(shortest,2)+pow(middle,2));

//operation

if(side_1>0&&side_2>0&&side_3>0){



     if(side_1==side_2&&side_1==side_3){
        printf("The triangle is Equilateral!");
        return 0;}

    if(hyp==longest){
        printf("The triangle is right angle!");
        return 0;}

    else if(side_1!=side_2&&side_1!=side_3&&side_2!=side_3){
        printf("The triangle is scalene!");
        return 0;}




    else{
        printf("The triangle is Isosceles");
        return 0;
        }


}

else {
    printf("The input is invalid or the length is less then 0");
return 1;}
}

