//this program converts pages sizes from A0 upto A8
#include<stdio.h>
int main(){
//variables
float length=1189,width=841;
int number=0;
//operation
while(number<=8){

    printf("A(%d)=%.0fx%.0f\n",number,length,width);

    if(length>width){
        length=length/2;}
    else{
        width=width/2;}


        number++;}
return 0;}
