#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float x1, y1, x2, y2, dist, a;
  printf("Insira coordenadas do primeiro ponto (x, y): ");
  scanf("(%f, %f)", &x1, &y1);
  //printf("(%f, %f)\n", x1, y1);
  printf("Insira coordenadas do segundo ponto (x, y): ");
  scanf(" (%f, %f)", &x2, &y2);
  //printf("(%f, %f)\n", x2, y2);
  dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

  // cálculo de 'a' pode gerar erro caso (x2-x1) = 0; criar uma
  // condição para verificar isso e evitar a divisão por zero
  if (x2 - x1 != 0)
    a = (y2 - y1) / (x2 - x1);
  else
    a = INFINITY;
  printf("Distancia entre os pontos (%.3f, %.3f) e (%.3f, %.3f) eh de %.3f unidades\n", x1, y1, x2, y2, dist);
  if (!isinf(a))
    printf("O coeficiente 'a' eh igual a %.3f\n", a);
  else
    printf("Coeficiente 'a' eh infinito (reta paralela ao eixo y)\n");
  return 0;
}