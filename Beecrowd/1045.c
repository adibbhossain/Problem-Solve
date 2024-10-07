#include<stdio.h>
int main()
{
    double a, b, c, a1, b1, c1;
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a >= b && a >= c)
    {
        if(b >= c)
        {
            a1 = a;
            b1 = b;
            c1 = c;
        }
        else
        {
            a1 = a;
            b1 = c;
            c1 = b;
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            a1 = b;
            b1 = a;
            c1 = c;
        }
        else
        {
            a1 = b;
            b1 = c;
            c1 = a;
        }
    }
     else if(c >= a && c >= b)
    {
        if(a >= b)
        {
            a1 = c;
            b1 = a;
            c1 = b;
        }
        else
        {
            a1 = c;
            b1 = b;
            c1 = a;
        }
    }

    // printf("%lf\n%lf\n%lf", a1,b1,c1);

    if((b1 + c1) <= a1)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((b1 * b1 + c1 * c1) == a1 * a1)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(((b1 * b1) + (c1 * c1)) < (a1 * a1))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(a1*a1 < (b1*b1 + c1*c1))
        printf("TRIANGULO ACUTANGULO\n");
    if(a1 == b1 && a1 == c1 && b1 == c1)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a1 == b1 && b1 != c1) || (a1 == c1 && c1 != b1) || (b1 == c1 && c1 != a1))
    {
        printf("TRIANGULO ISOSCELES\n");
    }



    return 0;

}
