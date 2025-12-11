#include <stdio.h>
void xstrcpy(char *t, char *s) {
  int i = 0;
  while (s[i] != '\0') {
    t[i] = s[i];
    i++;
  }
  t[i] = s[i];
  return;
}
int main() {
  // variables
  char source[10] = "Talhakhan", target[10];
  // function calling
  xstrcpy(target, source);
  printf("%s", target);
}