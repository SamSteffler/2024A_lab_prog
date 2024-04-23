// criar um vetor com os 20 primeiros numeros impares e calcular a soma
#include <stdio.h>

int main() {
  int impares[20];
  int soma = 0, count = 0;
  for (int i = 0; i < 20;) {
    if (count % 2 == 1) {
      impares[i] = count;
      soma += impares[i];
      i++;
    }
    count++;
  }
  printf("A soma dos elementos do vetor eh igual a %d\n", soma);
  return 0;
}