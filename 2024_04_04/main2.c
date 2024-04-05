#include <stdio.h>
#include <stdlib.h>

int main() {
  int costini;
  float taxa1 = 0, taxa2 = 0, taxa3 = 0, taxa4 = 0, costfim;
  printf("Digite o valor inteiro do produto: ");
  scanf("%d", &costini);

  /*
    taxa1 = 0.15;
    if (costini > 2) {
      taxa2 = ((float)costini - 2.0 > 3.0 ? 3.0 : (float)costini - 2.0) * 0.02;
      taxa3 = 0;
      taxa4 = 0;
    }
    if (costini > 5) {
      taxa3 = ((float)costini - 5.0 > 15.0 ? 15.0 : (float)costini - 5.0) * 0.1;
      taxa4 = 0;
    }
    if (costini > 20) {
      taxa4 = ((float)costini - 20.0) * 0.08;
    }
  */

  switch (costini) {
    case 0 ... 2:
      taxa1 = 0.15;
      break;
    case 3 ... 5:
      taxa1 = 0.15;
      taxa2 = ((float)costini - 2.0) * 0.02;
      break;
    case 6 ... 20:
      taxa1 = 0.15;
      taxa2 = 3.0 * 0.02;
      taxa3 = ((float)costini - 5.0) * 0.1;
      break;

    default:
      taxa1 = 0.15;
      taxa2 = 3.0 * 0.02;
      taxa3 = 15.0 * 0.1;
      taxa4 = ((float)costini - 20.0) * 0.08;
      break;
  }

  costfim = (float)costini + taxa1 + taxa2 + taxa3 + taxa4;
  printf("O valor final eh de R$ %.2f reais", costfim);
  return 0;
}