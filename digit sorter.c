#include<stdio.h>
int main(){
//variables
int num,n1,n2,n3,large,mid,small;
//input
printf("Input the 3 digit number:");
int val=scanf("%d", &num);
//if conditions
if(val==1){
    if(num<100||num>999){
            printf("Number of digits more or less then 3 or negative");}

    else{
            //operation
            n1=num%10;
            num=num/10;

            n2=num%10;
            num=num/10;

            n3=num%10;
            num=num/10;

            //if condition for sorting
                //condition 1
                if(n1>n2 && n1>n3){
                    large=n1;

                    if(n2>n3){
                        mid=n2;
                        small=n3;}

                    else{
                        mid=n3;
                        small=n2;}
                }
                //condition 2
                else if(n2>n1 && n2>n3){
                    large=n2;

                    if(n1>n3){
                        mid=n1;
                        small=n3;}

                    else{
                        mid=n3;
                        small=n1;}
                }
                //condition 3
               else if(n3>n1 && n3>n2){
                        large=n3;

                    if(n1>n2){
                        mid=n1;
                        small=n2;}

                    else{
                        mid=n2;
                        small=n1;}
                }
                printf("The sorted order is:%d",small*100+mid*10+large*1);
        }
}
else
    printf("Invalid input number");

}
