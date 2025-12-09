#include <stdio.h>

// Global variables (optional but OK for now)
int u_upto_100 = 0, u_till_200 = 0, u_after_200 = 0;
int p1 = 0, p2 = 0, p3 = 0;
int total = 0;
float taxes = 0;

// Function to divide units into tiers
void tiers(int units) {
    if (units <= 100) {
        u_upto_100 = units;
    } else if (units > 100 && units <= 200) {
        u_upto_100 = 100;
        u_till_200 = units - 100;
    } else {
        u_upto_100 = 100;
        u_till_200 = 100;
        u_after_200 = units - 200;
    }
}

// Function to calculate total price
int calculation(void) {
    p1 = u_upto_100 * 10;
    p2 = u_till_200 * 15;
    p3 = u_after_200 * 20;
    total = p1 + p2 + p3;
    return total;
}

// Function to calculate tax
float tax(void) {
    taxes = total * 0.05;
    return taxes;
}

// Main function
int main() {
    int units;
    printf("Enter the total number of units consumed: ");
    scanf("%d", &units);

    // Step 1: Divide units into tiers
    tiers(units);

    // Step 2: Calculate total bill
    total = calculation();

    // Step 3: Calculate tax
    float t = tax();

    // Step 4: Output neatly formatted bill
    printf("\n|----------------------------------------------------|\n");
    printf("|                   ELECTRICITY BILL                 |\n");
    printf("|----------------------------------------------------|\n");
    printf("|                   UNITS USED                      |\n");
    printf("|----------------------------------------------------|\n");
    printf("|  TIER#1  |  TIER#2  |  TIER#3  |    TOTAL UNITS   |\n");
    printf("|----------------------------------------------------|\n");
    printf("|   %3d    |   %3d    |   %3d    |       %3d        |\n",
           u_upto_100, u_till_200, u_after_200,
           (u_upto_100 + u_till_200 + u_after_200));
    printf("|----------------------------------------------------|\n");
    printf("|                   PRICE BREAKDOWN                  |\n");
    printf("|----------------------------------------------------|\n");
    printf("| Rs.%4d  | Rs.%4d  | Rs.%4d  |  Total: Rs.%4d      |\n",
           p1, p2, p3, total);
    printf("|----------------------------------------------------|\n");
    printf("| TAX (5%%): Rs.%.2f       TOTAL BILL: Rs.%.2f        |\n",
           t, total + t);
    printf("|----------------------------------------------------|\n");

    return 0;
}

