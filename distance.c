#include<stdio.h>
#include<math.h>
int main(){
//variables
double L1,L2,G1,G2,D;
//input
printf("Enter the values in radians not degree\n");
printf("Enter the value of L1:");
scanf("%lf", &L1);

printf("Enter the value of L2:");
scanf("%lf", &L2);

printf("Enter the value of G1:");
scanf("%lf", &G1);

printf("Enter the value of G2:");
scanf("%lf", &G2);
//opertaion
D = 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
//output
printf("the distance in nautical miles is:%.2lf miles",D);
return 0;

}
