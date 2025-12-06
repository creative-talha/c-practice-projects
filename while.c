#include<stdio.h>
int main(){
    //variables
    int number=5;
    int guess;
    int nog=1;
    
    //while operation for the game
    while(guess!=number&&nog<=3){
        printf("Enter the guess number:");
        scanf("%d", &guess);
        nog++;
    }
    if(nog>=3){
        printf("no more guesses.\nYou lost.");
    } 
    else{
        printf("Yahoo! You won.");
    
    }
    return 0;
    
}