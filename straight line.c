#include<stdio.h>
int main(){
//variables
int v,v1,v2,v3,n=1;//for validity check
float x1,x2,x3,y1,y2,y3,slope;

while(n==1){
n=0;
//input
printf("please enter the value of x1 , y1:");
v1=scanf("%f%f",&x1,&y1);

if(v1!=2){
    printf("Invalid input in one of the value!");
    while(getchar()!='\
n');
    n++;
    continue;}

printf("please enter the value of x2 , y2:");
v2=scanf("%f%f",&x2,&y2);

if(v2!=2){
    printf("Invalid input in one of the value!");
    while(getchar()!='/n')
    n++;
    continue;}

printf("please enter the value of x3 , y3:");
v3=scanf("%f%f",&x3,&y3);

if(v3!=2){
    printf("Invalid input in one of the value!");
    while(getchar()!='/n')
    n++;
    continue;}

//formula
slope=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);

//operation
if(slope==0){
    printf("\nThe line is straight!");
    return 0;
    }

else{
    printf("The line is not straight");
    return 0;}
}
}
