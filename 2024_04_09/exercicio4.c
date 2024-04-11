#include <stdlib.h>
#include <stdio.h>

int main(){
  int n;
  float x;
  printf("Insira o numero de valores: ");
  scanf("%d", &n);
  printf("Insira o valor real X: ");
  scanf("%f", &x);
  for (int i = 0; i < n; i++)
  {
    float var;
    printf("Insira o %dº valor: ", i+1);
    scanf("%f", &var);
    printf("O produto de %.3f com %.3f eh %.3f\n", var, x, var*x);
  }
  
  return 0;
}