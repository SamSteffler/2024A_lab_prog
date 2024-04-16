// algoritmo que le um numero inteiro positivo e imprima a soma de seus digitos
#include <stdlib.h>
#include <stdio.h>

int main(){
  long int val, temp, base;
  printf("insira um valor: ");
  scanf("%d", &val);
  while(val > 0){
    temp += val % 10;
    val /= 10;
  }
  printf("Soma: %d\n", temp);
  return 0;
}