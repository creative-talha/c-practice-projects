//Declare an array of 5 integers and displays the elements of the array using for loop
#include<stdio.h>

int main(){
//array
int elements[5]={34,56,78,67,56};

//displaying the elements
for(int i=0;i<5;i++){
    printf("Integer value#%d is:%d\n",i+1,elements[i]);
}
return 0;


}
