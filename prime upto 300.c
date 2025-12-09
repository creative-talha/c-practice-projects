#include <stdio.h>

int main(){
int n,i,j,Prime,mod;

printf("The number 2 is prime!\n");
printf("The number 3 is prime!\n");

for(n=4;n<=300;n++) {
    Prime = 1;

for(j=2;j<=n/2;j++){
    mod=n%j;
    if(mod==0) {
        Prime=0;
        continue;
}
}

    if(Prime)
        printf("The number %d is prime!\n", n);}

return 0;
}
