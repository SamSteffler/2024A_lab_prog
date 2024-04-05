// Criar o programa que indica quantos dias, horas, minutos e segundos equivalem a uma quantidade de segundos informada ao usuário
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define DIA 86400
#define HORA 3600
#define MIN 60
unsigned int valor, dias, horas, mins, segs, resto;

int main(){
    printf("Insira o valor em segundos para ser convertido em dd:hh:mm:ss :\t");
    scanf("%u", &valor);
    dias = valor / DIA;
    resto = valor % DIA;
    horas = resto / HORA;
    resto = resto % HORA;
    mins = resto / MIN;
    segs = resto % MIN;
    printf("%d segundos valem %d horas, %d horas, %d minutos e %d segundos\n", valor, dias, horas, mins, segs);
    return 0;
}

