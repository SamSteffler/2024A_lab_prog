//variaveis acumuladoras - soma de uma sequencia de numeros ate o usuario digitar zero
#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, soma, valor;
  printf("insira o numero de valores a serem digitados: ");
  scanf("%d", &num);
  soma = 0;
  do {
    printf("insira um valor: ");
    scanf("%d", &valor);
    soma += valor;
  } while (valor != 0);
  printf("Resultado: %d\n", soma);
  return 0;
}