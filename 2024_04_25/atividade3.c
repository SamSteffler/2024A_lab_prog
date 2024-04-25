//converte quantidade de minutos para hora:minuto
#include <stdio.h>

void horamin(long int mins){
  long hh, mm;
  hh = mins / 60;
  mm = mins % 60;
  printf("%ld minutos sao %0.2ld:%0.2ld", mins, hh, mm);
}

int main(){
  long mins;
  printf("Insira a quantidade de minutos: ");
  scanf("%ld", &mins);
  horamin(mins);
  return 0;
}