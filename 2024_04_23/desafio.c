#include <stdio.h>

int main() {
  float v1[5], v2[5], v3[10];
  int a = 0, b = 0;
  printf("Insira os valores de v1: ");
  for (int i = 0; i < 5; i++) {
    scanf("%f", &v1[i]);
  }
  printf("Insira os valores de v2: ");
  for (int i = 0; i < 5; i++) {
    scanf("%f", &v2[i]);
  }
  for (int i = 0; i < 10;) {
    if ((v1[a] <= v2[b] && a < 5) || b >= 5) {
      v3[i] = v1[a];
      i++;
      a++;
    }
    else if ((v1[a] > v2[b] && b < 5) || a >= 5) {
      v3[i] = v2[b];
      i++;
      b++;
    }
  }
  printf("O vetor v3 ordenado eh:\n");
  for (int i = 0; i < 10; i++) {
    printf("%f\n", v3[i]);
  }
  return 0;
}