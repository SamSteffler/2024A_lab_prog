#include <stdlib.h>
#include <stdio.h>

int main(){
    int horas, minutos, segundos, total;
    printf("Insira a hora atual: ");
    scanf(" %d:%d:%d", &horas, &minutos, &segundos);
    total = 3600*horas + 60*minutos + segundos;
    printf("%d segundos se passaram desde a meia-noite de hoje\n", total);
    return 0;
}