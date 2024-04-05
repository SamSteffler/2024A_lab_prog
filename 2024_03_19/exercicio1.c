// indicar quantos mililitros um copo com 12cm de altura e 6cm de diametro possui

#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int altura = 12, diam = 6;
float volume;

int main(){
    volume = pow(diam/2, 2)*altura*M_PI;
    printf("O volume do copo com altura = 12cm e raio = 6cm eh de %.3f ml", volume);
    return 0;
}