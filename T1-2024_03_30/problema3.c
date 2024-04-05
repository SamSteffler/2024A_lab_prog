#include <stdio.h>
#include <stdlib.h>

int main() {
  int n100 = 0, n50 = 0, n10 = 0, n5 = 0, valor = 0, dinheiro = 0, troco = 0;
  printf("Insira o valor (R$) da compra: ");
  scanf("%d", &valor);
  printf("Insira o valor (R$) dado pelo comprador: ");
  scanf("%d", &dinheiro);
  troco = dinheiro - valor;
  printf("O valor do troco eh R$%d,00\n", troco);
  n100 = troco / 100;
  troco = troco % 100;
  n50 = troco / 50;
  troco = troco % 50;
  n10 = troco / 10;
  troco = troco % 10;
  n5 = troco / 5;
  troco = troco % 5;
  troco;
  printf("O troco sera de:\n%d notas de 100 reais\n%d notas de 50 reais\n%d notas de 10 reais\n%d notas de 5 reais\n%d moedas de 1 real\n", n100, n50, n10, n5, troco);
  return 0;
}