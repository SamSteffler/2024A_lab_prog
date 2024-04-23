// ler um vetor de 5 numeros reais, calcular e imprimir a soma
#include <stdio.h>

int main() {
  float arr[5], soma;

  printf("insira 5 valores reais: ");
  for (int i = 0; i < 5; i++) {
    scanf("%f", &arr[i]);
  }
  for (int i = 0; i < 5; i++) soma += arr[i];
  printf("A soma dos 5 elementos eh igual a %f\n", soma);
  return 0;
}