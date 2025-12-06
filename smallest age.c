#include<stdio.h>
int main(){
//variables
int ram,shyam,ajay;
//input
printf("Please input the age of Ram,shyam,ajay:");
scanf("%d%d%d", &ram,&shyam,&ajay);
//operation
if(ram>shyam&&ram>ajay){
printf("Ram is the oldest");
return 0;}

else if(ajay>shyam&&ajay>ram){
printf("Ajay is the oldest");
return 0;}

else if(shyam>ram&&shyam>ajay){
printf("Shyam is the oldest");
return 0;}

else if(shyam==ram||shyam==ajay){
    printf("Equal ages!");
    return 0;}
else{
    printf("Invalid age!");
    return 1;}
}
