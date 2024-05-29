// comparar duas strings, se forem iguais indicar e se forem diferentes
// concatena-las
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 20

int main() {
  char a[LEN], b[LEN];
  bool diff;
  fgets(a, LEN, stdin);
  fgets(b, LEN, stdin);
  diff = strcmp(a, b);
  if (!diff)
    printf("as duas strings sao iguais");
  else {
    int len = strlen(a);
    a[len - 1] = '\0';
    strcat(a, b);
    printf("as duas strings sao diferentes e contatenadas sao %s\n", a);
  }
  return 0;
}