#include<stdio.h>
int main()
{
    float x, y , z;
    scanf("%f%f%f", &x, &y, &z);
    if((x < (y + z)) && (y < (x + z)) && (z < (x + y)))
    {
        printf("Perimetro = %.1f\n", x + y + z);
    }
    else
    {
        printf("Area = %.1f\n", ((x + y) * .5) * z);
    }
}