// criar um programa que leia vetor int de 5 posições e imprima somente valores
// impares
#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    if (arr[i] % 2 == 1) printf("%d\n", arr[i]);
  }
  return 0;
}