#include <stdio.h>
#include <stdlib.h>

//\033[0m off
//\033[4m on
int main() {
  int a, b, c, d, e, f;
  printf("Soma de fracoes - (a/b) + (c/d)\n");
  printf("Insira o valor da primeira fracao (a/b): ");
  scanf("%d/%d", &a, &b);
  printf("Insira o valor da segunda fraçao (c/d): ");
  scanf("%d/%d", &c, &d);
  if (b == d) {
    f = b;
    e = a + c;
  } else {
    e = (a * d) + (c * b);
    f = b * d;
  }
  printf("Resultado = %d/%d", e, f);
  return 0;
}