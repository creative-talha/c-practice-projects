/*
  filename: alphabet_triangle.c
  author: Muhammad Talha
  date: 2025-10-24
  description:
    Prints a mirrored alphabet triangle pattern using ASCII letters.
    Example output for max = 'G' (top row has no center space, subsequent rows have 1,3,5... spaces).
  usage:
    gcc patterns/alphabet_triangle.c -o alphabet_triangle
    ./alphabet_triangle
*/

#include <stdio.h>

int main(void) {
    char max = 'G'; /* Change this to any uppercase letter 'A'..'Z' */
    int rows = max - 'A' + 1;

    for (int i = 0; i < rows; i++) {
        char left_end = (char)(max - i);

        /* Print left side: A .. left_end */
        for (char c = 'A'; c <= left_end; c++) putchar(c);

        /* Determine spaces: top row has no middle space; others 1,3,5,... */
        int spaces = (i == 0) ? 0 : 2 * i - 1;
        for (int s = 0; s < spaces; s++) putchar(' ');

        /* Print right side: left_end - 1 down to A */
        for (char c = left_end - 1; c >= 'A'; c--) putchar(c);

        putchar('\n');
    }

    return 0;
}
