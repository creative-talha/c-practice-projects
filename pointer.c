#include<stdio.h>
int main(){
    //variable
    int x=30;
    float y=20.34;
    char z='A';
    //pointers
    int *px= &x;
    printf("%p",px);
     float *py=&y;
     printf("\n%p",py);

     char *pz=&z;
     printf("\n%p",pz);
     //derefering a pointer(giving the value to the pointer of the variable of which address it is storing)
     printf("\n%c",*pz);

     printf("\n%f", *py);

     printf("\n%d", *px);
     return 0;
    }
