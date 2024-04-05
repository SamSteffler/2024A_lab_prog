#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float x1, y1, r1, x2, y2, r2, dist;
  printf("Insira coordenadas do centro do primeiro circulo (x, y): ");
  scanf("(%f, %f)", &x1, &y1);
  printf("Insira o raio do primeiro circulo: ");
  scanf("%f", &r1);
  //printf("(%f, %f)\n", x1, y1);
  printf("Insira coordenadas do centro do segundo circulo (x, y): ");
  scanf(" (%f, %f)", &x2, &y2);
  printf("Insira o raio do segundo circulo: ");
  scanf("%f", &r2);
  //printf("(%f, %f)\n", x2, y2);
  dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

  // cálculo de 'a' pode gerar erro caso (x2-x1) = 0; criar uma
  // condição para verificar isso e evitar a divisão por zero
  printf("Distancia entre os pontos (%.3f, %.3f) e (%.3f, %.3f) eh de %.3f unidades\n", x1, y1, x2, y2, dist);

  if (r1+r2 > dist)
    printf("Os circulos se intersectamn\n");
  else if (r1+r2 == dist)
    printf("Os circulos se tangenciam\n");
  else
    printf("Os circulos nao se intersectam\n");
  return 0;
}