//an program to check weathe the area is greater or perimeter
#include<stdio.h>
int main(){
//variables
float length,width,perimeter,area;
//input
printf("please enter the length:");
int v1=scanf("%f",&length);

printf("please enter the width:");
int v2=scanf("%f",&width);

//validity
int v=v1+v2;
if(v!=2){
    printf("Invalid input!\n");
    return 1;
}
//operation
perimeter=2*(length+width);
area=length*width;

printf("\nArea=%.3f\n",area);
printf("Perimeter=%.3f\n",perimeter);

if(area>perimeter){

    printf("Area is greater!\n");
    return 0;}

if(perimeter>area){

    printf("perimeter is greater!\n");
    return 0;}
if(perimeter==area){

    printf("perimeter and area are equal!\n");
    return 0;}

}
