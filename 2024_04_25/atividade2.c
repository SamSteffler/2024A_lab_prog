//programa que calcula a area do circulo com base no raio por meio de funcao
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float area(float r){
  return M_PI * r * r;
}

int main(){
  float r;
  printf("Digite o raio do circulo: ");
  scanf("%f", &r);
  printf("A area do circulo eh %f\n", area(r));
  return 0;
}
