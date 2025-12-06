#include <stdio.h>
int main() {
  // variables
  int year_input, year, leaf_year, num_days, days, n = 1;
  // input
  while (n == 1) {
    n = 0;
    // input
    printf("please enter the year:");
    int v = scanf("%d", &year_input);

    if (v != 1 || year_input == 0) {
      printf("Invalid input!\n");
      while (getchar() != '\n')
        ;
      n++;
      continue;
    } // if
  } // while

  // operation
  year = 1;
  leaf_year = 0;

  while (year != year_input) { // while to check leaf year

    if (year % 100 == 0) { // to check if it is century year

      if (year % 400 == 0) // if it is century year then to check if it is leaf
        leaf_year++;
    } // if

    else { // if it is not century then check if it is leaf
      if (year % 4 == 0)
        leaf_year++;
    } // else
    year++;
  } // while

  // now minus leaf years from the total years and find the total number of days
  year = year - leaf_year;
  // days
  num_days = leaf_year * 366 + year * 365;

  // now check the day in 01/01/input_year
  days = (num_days + 1) % 7;

  // finding day operation
  switch (days) {

  case 0:
    printf("Sunday");
    break;

  case 1:
    printf("Monday");
    break;

  case 2:
    printf("Tuesday");
    break;

  case 3:
    printf("Wednesday");
    break;

  case 4:
    printf("Thursday");
    break;

  case 5:
    printf("Friday");
    break;

  case 6:
    printf("Saturday");
    break;
  }
} // main
