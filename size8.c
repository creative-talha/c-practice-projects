#include<stdio.h>
int main(){
//array declaration
int elements[8];

//array initialization
for(int i=0;i<8;i++){
    printf("Value#%d:",i+1);
    scanf("%d",&elements[i]);
}
printf("The values in reverse order are:[");
//array printing in reverse order
for(int j=7;j>=0;j--){
    printf("%d ,",elements[j]);
}
printf("]");



}