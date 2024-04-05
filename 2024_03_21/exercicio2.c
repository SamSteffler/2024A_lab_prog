// Programa que computa o valor de bhaskara
#include <stdio.h>
#define _USE_MATH_LITERALS
#include <math.h>

int main(){
    float a = 1.0, b = -2.0, c = 1.0;
    float delta, x1, x2;
    delta = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(delta))/(2 * a);
    x2 = (-b - sqrt(delta))/(2 * a);
    printf("x1 = %.3f\tx2 = %.3f\n", x1, x2);
    return 0;
}