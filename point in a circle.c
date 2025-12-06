#include<stdio.h>
#include<math.h>
int main(){
//variables
int v,v1,v2,v3,n=1;//for validity check
float x,y,radius,distance;


while(n==1){
n=0;
//input
printf("Please enter the value of x:");
v1=scanf("%f",&x);
    if(v1!=1){
        printf("Invalid value of x!\n");
        while(getchar()!='\n');
        n++;
        continue;}


printf("Please enter the value of y:");
v2=scanf("%f",&y);
    if(v2!=1){
        printf("Invalid value of y!\n");
        while(getchar()!='\n');
        n++;
        continue;}

printf("Please enter The radius:");
v3=scanf("%f",&radius);
    if(v3!=1){
        printf("Invalid Radius!\n");
        while(getchar()!='\n');
        n++;
        continue;}

//formula
distance=sqrt(pow(x,2)+pow(y,2));

//operation
    if(distance>radius){
        printf("The point is outside the circle!");
        return 0;
}

    else if(distance<radius){
        printf("The point is Inside the circle!");
        return 0;
}

    else{
        printf("The point is On the circle!");
        return 0;
}
                    }//while
                        }//main

