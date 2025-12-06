#include<stdio.h>
int main(){
//variables
float n1,n2,n3,n4,n5,per;
int start=1;
//while
while(start==1){
    printf("enter the marks in the papers:");
    //if condition
    if(scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5)==5){
    per=(n1+n2+n3+n4+n5)/500*100;
    //nested if
    if(per>=60){
        printf("First division");}

    else if(per>=50){
        printf("Second division");}

    else if(per>=40){
        printf("Third division");}

    else if(per<40){
        printf("Fail");}

        }

    else
        {printf("Invalid inputs");
        }

        printf("\n1 to perform another 0 to end");
        scanf("%d",&start);


}


return 0;
}
