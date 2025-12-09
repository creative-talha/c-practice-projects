#include<stdio.h>
//global variables
int v1, v2,v3,v4,v5,sum,average;

//function for sum and average
void function(v1,v2,v3,v4,v5){

sum=v1+v2+v3+v4+v5;

average=sum/5;

}

int main(){
//input
printf("Please enter Value1:");
scanf("%d",&v1);


printf("Please enter Value2:");
scanf("%d",&v2);

printf("Please enter Value3:");
scanf("%d",&v3);

printf("Please enter Value4:");
scanf("%d",&v4);

printf("Please enter Value5:");
scanf("%d",&v5);

//calling function
function(v1,v2,v3,v4,v5);

//printing outputs

printf("The sum is :%d\n",sum);
printf("The average is:%d\n",average);

return 0;


}



