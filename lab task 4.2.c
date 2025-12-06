#include<stdio.h>
int main(){
//variables
char character;
//input
printf("Input the character:");
scanf("%c",&character);
//operation
if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u')
    printf("The Character is vowel");
else
    printf("The Character is not vowel");

return 0;
}
