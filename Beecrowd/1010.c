#include<stdio.h>
int main()
{
    float x, y, z, sum = 0, add;
    for(int i = 0; i < 2; i++)
    {
        scanf("%f%f%f", &x, &y, &z);
        add = y * z;
        sum += add;
    }
    printf("VALOR A PAGAR: R$ %.2f\n", sum);
}