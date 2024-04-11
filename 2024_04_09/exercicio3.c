#include <stdio.h>
#include <stdlib.h>

int main(){
  float arr[10];
  
  for (int i = 0; i < 10; i++){
    printf("Digite o %dº numero: ", i+1);
    scanf("%f", &arr[i]);
  }

  for (int i = 0; i < 10; i++){
    printf("%.3f: dobro = %.3f, quadrado = %.3f\n", arr[i], arr[i]*2, arr[i]*arr[i]);
  } 
}