#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor;
  printf("Insira a nota do aluno: ");
  scanf("%d", &valor);
  if (valor >= 60)
    printf("APROVADO\n");
  else
    printf("REPROVADO\n");
  return 0;
}