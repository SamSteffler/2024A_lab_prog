// Faz a troca de duas variaveis sem utilizar variaveis auxiliares
#include <stdio.h>

int main(){
    int a = 5, b = 3;
    printf("a=%d\tb=%d\n", a, b);
    a += b;
    b = a - b;
    a -= b;
    printf("a=%d\tb=%d\n", a, b);
    return 0;
}