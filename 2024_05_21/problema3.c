// modificar por referencia um valor real para a sua raiz quadrada e printar no main()
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void raiz(float *val){
  *val = sqrt(*val);
}
int main(){
  float a;
  scanf("%f", &a);
  raiz(&a);
  printf("A raiz do valor inserido eh %.3f\n", a);
  return 0;
}