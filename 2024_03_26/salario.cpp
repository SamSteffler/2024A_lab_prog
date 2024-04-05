#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void calcular(int salario){
int nota100, nota50, nota20, nota10, nota5, notastot, temp;
  nota100 = salario / 100;
  temp = salario % 100;
  nota50 = temp / 50;
  temp = temp % 50;
  nota20 = temp / 20;
  temp = temp % 20;
  nota10 = temp / 10;
  temp = temp % 10;
  nota5 = temp / 5;
  temp = temp % 5;
  notastot = nota100 + nota50 + nota20 + nota10 + nota5;
  printf("Notas a serem usadas:\n");
  printf("Notas de 100: \t%4d\n", nota100);
  printf("Notas de 50: \t%4d\n", nota50);
  printf("Notas de 20: \t%4d\n", nota20);
  printf("Notas de 10: \t%4d\n", nota10);
  printf("Notas de 5: \t%4d\n", nota5);
}

int main() {
  int salarioem, salarioba;

  printf("Insira o salario da empregada e da baba:\t");
  scanf("%d%d", &salarioem, &salarioba);
  printf("Salarios informados: R$%d,00 e R$%d,00\n", salarioem, salarioba);
  if (salarioem % 5 != 0) {
    salarioem += (5 - salarioem % 5);
    printf("Salario reajustado da empregada: R$%d,00\n", salarioem);
  }
    if (salarioba % 5 != 0) {
    salarioba += (5 - salarioba % 5);
    printf("Salario reajustado da baba: R$%d,00\n", salarioba);
  }
  printf("Pagamento da empregada:\n");
  calcular(salarioem);
  printf("\nPagamento da baba:\n");
  calcular(salarioba);
  return 0;
}