#include<stdio.h>
int main(){
//variable
int mod,num,v,i;

//input
printf("Please input the number:");
v=scanf("%d",&num);

//validity
    if(v!=1){
        printf("Invalid input");
        return 1;}

    //operation
        if(num>=2){

            for(i=2;i<num;i++){
                mod=num%i;

                if(mod==0)
                    break;
                }//for loop
        if(num==2){
            printf("The number is prime!");
            return 0;
            }//if 1
        else if(mod==0){//means is fully divisible by any number<it and>1
            printf("The number is not prime!");
            return 0;
            }//if 2

        else{//means not divisible by any except 1 and itself
            printf("The number is prime!");
            return 0;}//else
    }//if

    else{//if the first if fails
        if(num==0||num==1){
            printf("The number is neither prime nor composite!");
            return 0;
        }//if 2

        else{
            printf("The number is Less then 0");
            return 0;
        }//else 2

    }//else main
}//main

