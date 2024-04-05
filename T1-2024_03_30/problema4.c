#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  int dia, mes, ano, proxdia, proxmes, proxano;
  bool bissexto;
  printf("Informe a data (formato DD/MM/AAAA): ");
  scanf("%d/%d/%d", &dia, &mes, &ano);

  if (ano % 1000 == 0 || (ano % 4 == 0 && !(ano % 100 == 0))) bissexto = true;

  if (mes == 12 && dia == 31) {
    proxano = ano + 1;
    proxdia = 1;
    proxmes = 1;
  } else if (mes == 2 && dia == 28 && !bissexto) {
    proxano = ano;
    proxmes = mes + 1;
    proxdia = 1;
  } else if (mes == 2 && dia == 29 && bissexto) {
    proxano = ano;
    proxmes = mes + 1;
    proxdia = 1;
  } else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 ||
              mes == 10) &&
             dia == 31) {
    proxano = ano;
    proxmes = mes + 1;
    proxdia = 1;
  } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 30) {
    proxano = ano;
    proxmes = mes + 1;
    proxdia = 1;
  } else {
    proxano = ano;
    proxmes = mes;
    proxdia = dia + 1;
  }
  printf("A data seguinte sera %d/%d/%d\n", proxdia, proxmes, proxano);
  return 0;
}