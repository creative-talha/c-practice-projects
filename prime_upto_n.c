#include<stdio.h>
int main(){
//variables
int v,num,mod,i;

//input
printf("please input a number:");
scanf("%d", &num);



//validity
    if(v!=1){
        printf("%d", &num);
        printf("invalid number!");
        return 1;}

//operation
    for(i=2;i<num;i++){
        mod=num%i;
        if(mod==0)
            break;

        if(mod!=0){
            printf("The number is prime!");
            return 0;
        }

                    }
if(num==2)
    printf("The number is prime!");

return 0;
}