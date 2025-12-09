#include<stdio.h>

//factorial function
void factorial(){
//variables
int num,i,fact;
//input
printf("input a number:");
scanf("%d",&num);
fact=1;
//operation
for(i=1;i<=num;i++){
    fact=fact*i;
}
printf("The factorial is:%d\n\n\n\n",fact);
}



//prime or not function
void prime(){
//variables
int num,mod,i,division;
//input
printf("please enter the number:");
scanf("%d",&num);
division=0;

//operation
for(i=2;i<num;i++){
   mod=num%i;
    if(mod==0)
        division++;


}
if(num==1 || num==0)
    printf("The number is neither prime nor composite!\n\n\n");

else if(division==0)
    printf(" prime\n\n\n");
else
   printf("not prime\n\n\n");
   }



//odd or even function
void odd(){
    //variables
    int num,mod;
    //input
    printf("please input the number:");
    scanf("%d",&num);
    //operation
    mod=num%2;
     if(mod!=0){
        printf("The Number is Odd!\n\n\n");
        }
    else{
        printf("The number is Even!\n\n\n");
        }

}

//exit function
int exiting(int i){
i=1;
}


//option selection function
void option_selection(int a,int i){

    switch(a){
    case 1:
        factorial();
    break;

    case 2:
        prime();
    break;

    case 3:
        odd();
    break;


}
}




int main(){
//variables
int option=0,i=0;

//loop for infinite inputs
do{
    //input
printf("Please select the option in the following:\n1.Factorial of a number \n2.Prime or not \n3.Odd or even \n4.Exit\n");
scanf("%d",&option);

//option selection function calling
option_selection(option,i);
//loop stopping operation
if(option==4){
        return 0;
        break;}

}

while(i==0);



}
