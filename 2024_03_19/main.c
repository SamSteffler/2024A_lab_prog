#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

float radius, area;
// ddsfrcwe
int main() {
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);
  area = radius * radius * M_PI;
  printf("A circle with radius of %.3f units has an area of %.3f sq units\n",
         radius, area);
  return 0;
}