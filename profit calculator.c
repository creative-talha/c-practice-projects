#include<stdio.h>
int main(){
//variables
float cost,s_price,change;

//input
printf("Enter the cost:");
int v1=scanf("%f",&cost);

printf("Enter the selling price:");
int v2=scanf("%f", &s_price);

//validity check
int v=v1+v2;
if(v!=2){
    printf("Invalid cost or selling price!");
    return 1;
}

//operation
change=s_price-cost;

//if conditions
if(change>0){
    printf("you did profit\n");
    printf("PROFIT:%.2f",change);
    }

    else if(change<0){
        printf("You incurred loss\n");
        printf("LOSS:%.2f",(-change));
    }

    else
        printf("Their was no profit or loss");


    return 0;
}

