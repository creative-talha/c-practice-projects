#include <stdio.h>
int count = 0;
void count_it() { count++; }

int main() {
  count_it();
  count_it();
  count_it();

  printf(" The number of times the function is called is:%d!\n", count);
  return 0;
}
