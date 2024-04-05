#include <stdio.h>
#include <stdlib.h>

int main() {
  int codigo;
  printf("Digite o codigo: ");
  scanf("%d", &codigo);
  switch (codigo) {
    case 1 ... 20:
      printf("Origem: Europa\n");
      break;
    case 21 ... 40:
      printf("Origem: Asia\n");
      break;
    case 41 ... 60:
      printf("Origem: America\n");
      break;
    case 61 ... 80:
      printf("Origem: Africa\n");
      break;
    default:
      printf("Origem: Paraguai\n");
      break;
  }
  return 0;
}
