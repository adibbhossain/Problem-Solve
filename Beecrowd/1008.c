#include<stdio.h>
int main()
{
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", x, y * z);
}