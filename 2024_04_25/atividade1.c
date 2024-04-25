// converter celsius para fahrenheit
#include <stdio.h>

float ctof(float a){
  return a * 1.8 + 32;
} 

int main(){
  float cel;
  printf("Insira a temperatura em graus Celsius: ");
  scanf("%f", &cel);
  printf("A temperatura em graus Fahrenheit eh de %f\n", ctof(cel));
  return 0;
}