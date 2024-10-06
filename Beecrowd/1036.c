#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float sqr, r1, r2;
    sqr = (b * b) - 4 * a * c;
    if(a > 0 && sqr >=0)
    {
        r1 = ((-b + sqrt(sqr)) / (2 * a));
        r2 = ((-b - sqrt(sqr)) / (2 * a));
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
}