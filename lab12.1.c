#include <stdio.h>
struct tape {
  char title[30];
  int length; // in mins
  int cost;
  int rent;
  int d1, d2, d3;
};
int main() {
  struct tape t1, t2, t3;
  // int arr;
  struct tape arr[4] = {t1, t2, t3};
  for (int i = 0; i < 3; i++) {
    printf("TAPE#%d\n\n", i + 1);
    // title
    printf("Please enter title:");
    scanf("%s", arr[i].title);
    // length
    printf("Please enter length:");
    scanf("%d", &arr[i].length);
    // cost
    printf("Please enter cost:");
    scanf("%d", &arr[i].cost);
    // rent
    printf("Please enter rent:");
    scanf("%d", &arr[i].rent);
    // date
    // day
    printf("Please enter day:");
    scanf("%d", &arr[i].d1);
    // month
    printf("Please enter month:");
    scanf("%d", &arr[i].d2);
    // year
    printf("Please year:");
    scanf("%d", &arr[i].d3);
  }
  for (int k = 0; k < 3; k++) {
    printf("\n\n\nTape#%d\n", k + 1);
    printf("Title:%s\n", arr[k].title);
    printf("Length:%d\n", arr[k].length);
    printf("Cost:%d\n", arr[k].cost);
    printf("Title:%d\n", arr[k].rent);
    printf("Title:%d/%d/%d\n\v", arr[k].d1, arr[k].d2, arr[k].d3);
  }
}
