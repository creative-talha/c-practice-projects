#include<stdio.h>
#include<string.h>
//variables
int weight;
float height,height_s,bmi;
char cat[100];

//Bmi calculator function
float calculator(int weight,float height){

height_s=height*height;
bmi=weight/height_s;

return bmi;
}

//bmi category function

void category(float bmi){

printf("BMI:%.2f\n",bmi);

if(bmi>0 && bmi<15)
    printf("Starvation!\n");

else if(bmi>15&&bmi<17.5)
    printf("Anorexic!\n");

else if(bmi>17.5&&bmi<18.5)
    printf("Underweight!\n");

else if(bmi>18.5&&bmi<25)
    printf("Ideal!\n");

else if(bmi>25&&bmi<26)
    printf("Overweight!\n");

else if(bmi>30&&bmi<40)
    printf("Obese!\n");

else if(bmi>=40&&bmi<100)
    printf("Morbidly Obese!\n");

else
    printf("invalid bmi!");
}


int main(){
    //input
    printf("please enter the height in meters:");
    scanf("%f",&height);

    printf("please enter the weight in kilograms:");
    scanf("%d",&weight);
    //calling the calculation function
    float v=calculator(weight,height);
    //calling the categorization function
     category(bmi);

    return 0;
}


