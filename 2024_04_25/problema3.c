#include <stdio.h>

void funcao(int i, int j){
  printf("%d + %d = %d\n", i, j, i + j);
  printf("%d * %d = %d\n", i, j, i * j);
  printf("%d - %d = %d\n", i, j, i - j);
  printf("%d / %d = %d\n", i, j, i / j);
  printf("%d %% %d = %d\n", i, j, i % j);
}

int main(){
  int x, y;
  printf("Insira dois valores inteiros: ");
  scanf("%d%d", &x, &y);
  funcao(x, y);
  return 0;
}