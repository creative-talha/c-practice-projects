#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, per;
    int start = 1;

    while (start == 1) {
        printf("Enter marks in 5 papers: ");

        if (scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5) == 5) {
            per = (n1 + n2 + n3 + n4 + n5) / 500 * 100;

            if (per >= 60)
                printf("First Division\n");
            else if (per >= 50)
                printf("Second Division\n");
            else if (per >= 40)
                printf("Third Division\n");
            else
                printf("Fail\n");
        } else {
            printf("Invalid input\n");
            return 1; // exit program
        }

        printf("Enter 1 to continue or 0 to stop: ");
        scanf("%d", &start);
    }

    printf("Thanks!\n");
    return 0;
}
