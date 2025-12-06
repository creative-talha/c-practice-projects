#include <stdio.h>

struct Student {
    int rollNo;
    int marks;
};

int main() {
    struct Student s1 = {101, 85};
    struct Student s2 = s1;
    s2.marks = 90;
    printf("%d %d\n", s1.marks, s2.marks);
    return 0;
}
