#include <stdio.h>
#include <stdlib.h>

int main(){
  int a;
  printf("Insira um valor positivo inteiro: ");
  scanf("%d", &a);
  for (int i = 1; i <= a; i++){
    printf("%d ", i);
  }
  return 0;
}