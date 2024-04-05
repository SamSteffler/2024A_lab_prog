// Programa que computa o dobro, triplo e quadrado de um número inicializado e printa os valores na tela
#include <stdio.h>


int main(){
    int x = 3;
    int dobro, triplo, quadrado;
    dobro = 2*x;
    triplo = 3*x;
    quadrado = x*x;
    printf("O dobro de %d é %d\n", x, dobro);
    printf("O triplo de %d é %d\n", x, triplo);
    printf("O quadrado de %d é %d\n", x, quadrado);
    return 0;
}