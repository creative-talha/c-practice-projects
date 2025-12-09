/*                      //Problem//
Ask the user for the number of units consumed and calculate the bill as per these rates
Up to 100 units:Rs.10 per unit
101-200 units:Rs.15 per unit
Above 200 units:Rs.20 per unit

also add 5% task on total.
    GOAL:Show tax and total separately*/

                //Solution//
//Global variables
int units,u_upto_100=0,u_till_200=0,u_after_200=0,p1,p2,p3,total;
float taxes;
//Function to divide units into tiers
void tiers(){
if(units<=100)
    u_upto_100=units;

else if(units>100&&units<=200){
    u_upto_100=100;

    u_till_200=units-100;
}

else {
    u_upto_100=100;

    u_till_200=100;
    u_after_200=units-200;
}
    }
//Function to calculate total price
int calculation(){
//tier1
p1=u_upto_100*10;

//tier 2
p2=u_till_200*15;

//tier3
p3=u_after_200*20;

//total
total=p1+p2+p3;

return total;
}
//Function to calculate tax
float  tax(){
taxes=total/100.0*5;
return taxes;
}


#include<stdio.h>
int main(){
    //input
    printf("What are the total number of units:");
    scanf("%d",&units);
    //tiers function
    tiers();
    //calculation finction
    total=calculation();
    //taxatipon function
    float t=tax();
    //output
    printf("|----------------------------------------------------\n");
    printf("|                   ELECTRICITY BILL:-              |  \n");
    printf("|----------------------------------------------------\n");
    printf("|----------------------------------------------------\n");
    printf("|                        UNITS:                      \n");
    printf("|----------------------------------------------------\n");
    printf("|  TIER#1  |   TIER#2   |   TIER#3    |     TOTAL   | \n");
    printf("|----------------------------------------------------\n");
    printf("|  %d     |     %d    |    %d      |    %d              \n"
           ,u_upto_100,u_till_200,u_after_200,
            u_upto_100+u_till_200+u_after_200);
    printf("|----------------------------------------------------\n");
    printf("|                       PRICING:                    | \n");
    printf("|----------------------------------------------------\n");
    printf("| Rs.%d  |   Rs.%d  |   Rs.%d   | Rs.%d               \n"
                        ,p1,p2,p3,total);
    printf("|----------------------------------------------------\n");
    printf("|             TOTAL TAX & TOTAL BILL:               | \n");
    printf("|----------------------------------------------------\n");
    printf("| TAX(5%%): Rs.%.2f      |  TOTAL BILL: Rs.%.2f     \n"
                            ,t,total+t);
    printf("|----------------------------------------------------\n");
    }
