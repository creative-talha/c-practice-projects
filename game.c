#include <stdio.h>
// user choice
int user(int b) {
  int a;
  printf("Enter your choice:");
  scanf("%d", &a);

  return a;
}
// computer choice
int computer(int a) {
  int b;
  if (a == 1)
    b = 4;

  else if (a == 2)
    b = 3;

  else if (a == 3)
    b = 2;

  else if (a == 4)
    b = 1;

  return b;
}
// main
int main() {
  // variables
  int matchstick = 21, user_choice, computer_choice;

  // loop for multiple choise until user looses
  while (matchstick > 0) {
    printf("The Number of Matchsticks are:%d\n", matchstick);

    // user choice function calling
    user_choice = user(matchstick);

    if (user_choice > matchstick) {
      printf("invalid Matchstick amount!");

      continue;
    }

    else if (user_choice < 1 || user_choice > 4) {
      printf("Invalid Number of matchstick.Please choose between 1 to 4!\n");
      continue;
    }
    // subtracting the user choice
    matchstick = matchstick - user_choice;
    printf("The Number of Matchsticks after you choice are are:%d\n",
           matchstick);

    // calling computer function
    computer_choice = computer(user_choice);
    // subtracting the computer choice
    if (matchstick != 0) {
      matchstick = matchstick - computer_choice;
      printf("Computer choice:%d\n\n", computer_choice);
      printf("The Number of Matchsticks After computer choice are:%d\n",
             matchstick);
    }
  }

  printf("you Lost!\n");
  return 0;
}
