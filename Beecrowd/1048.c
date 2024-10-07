#include<stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    if(x >= 0 && x <= 400)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", x + x * .15, x * .15);
    }
    else if( x > 400 && x <= 800)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", x + x * .12, x * .12);
    }
    else if(x > 800 && x <= 1200)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", x + x * .10, x * .10);
    }
    else if(x > 1200 && x <= 2000)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", x + x * .07, x * .07);
    }
    else
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", x + x * .04, x * .04);
    }
}