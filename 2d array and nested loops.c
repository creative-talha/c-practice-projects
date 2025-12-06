#include<stdio.h>
int main(){
    //2d array
    int num[3][2]={{1,2},
                 {3,4},
                 {5,6}};
    //variables
    int i,j;
    //for statement
    for(i=0;i<3;i++){
        //nested for statement
        for(j=0;j<2;j++){
            printf("%d,", num[i][j]);
        }
            printf("\n");
            }
                return 0;}
