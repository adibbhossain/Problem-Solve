#include<stdio.h>
int main()
{
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    printf("TRIANGULO: %.3f\n", .5 * x * z);
    printf("CIRCULO: %.3f\n", 3.14159 * z * z);
    printf("TRAPEZIO: %.3f\n", ((x + y) * .5 ) * z);
    printf("QUADRADO: %.3f\n", y * y);
    printf("RETANGULO: %.3f\n", x * y);
}