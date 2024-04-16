// imprimier todos os valores entre dois numeros informados pelo usuario
#include <stdio.h>
#include <stdlib.h>

int main(){
  int num1, num2;
  printf("informe dois valores (menor e maior) separados por espaco: ");
  scanf("%d %d", &num1, &num2);
  for (int i = num1; i < num2; i++){
    printf("%d ", i);
  }
  return 0;
}