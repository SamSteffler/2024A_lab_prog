// ler array de 10 posicoes e o seu valor
#include <stdio.h>

int main(){
  float arr[10];
  printf("insira os valores reais em sequencia: ");
  for (int i = 0; i < 10; i++){
    scanf("%f", &arr[i]);
  }
  for (int i = 0; i < 10; i++){
    printf("arr[%d] = %.3f\n", i, arr[i]);
  }
}