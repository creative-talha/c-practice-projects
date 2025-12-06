#include<stdio.h>
int main(){
//variables
float r,g,b,white,r_,g_,b_,black,c,m,y;
//input
printf("Enter the value from 1 to 255!\n\n");

printf("please enter the value of red color:");
scanf("%f",&r);

printf("please enter the value of green color:");
scanf("%f",&g);

printf("please enter the value of blue color:");
scanf("%f",&b);

//operation
//first find dash values
r_=r/255;
g_=g/255;
b_=b/255;

//now find white value
if(r_==g_&&r_==b_)
    white=r_;
else{
if(r_>g_&&r_>b_)
    white=r_;

if(g_>r_&&g_>b_)
    white=g_;

if(b_>g_&&b_>r_)
    white=b_;}


//now finding cmyk
//cyan
c=((white-r_)/white);

//magenta
m=((white-g_)/white);

//yellow
y=((white-b_)/white);

black=1-white;

//output every cmyk color
printf("The color cyan intensity is:%f\n",c);
printf("The color Magenta intensity is:%f\n",m);
printf("The color yellow intensity is:%f\n",y);
printf("The color Black intensity is:%f\n",black);
return 0;

}
