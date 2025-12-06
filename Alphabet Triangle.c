#include<stdio.h>
//variables
int i,j,k,alp1='G',alp2='F',spacing=0,l=0,temp='F';//l=loop,c=counting,v=variable

//loop 1 function
void loop1(void){
    for(i='A';i<=alp1;i++)
    printf("%c",i);
    }


//spacing function
void space(void){
    for(k=1;k<=spacing;k++)
        printf(" ");
    if(spacing==0)
        spacing=spacing+1;
    else
        spacing=spacing+2;
}

//loop2 function
void loop2(void){
    for(j=temp;j<=alp2&&j>='A';j--)
    printf("%c",j);

}

//alphabet 2 decrementation
void alp2_decrementation(void){
    if(alp1!='F')
        temp--;
}
int main(){
    for(l=1;l<=7;l++){//loop 0
    loop1();
    alp1--;
    space();
    loop2();
    alp2_decrementation();
    printf("\n");}
}
