#include <stdio.h>
int main()
{
    int n, a, b, y;
    double g1, g2;
    scanf("%d", &n);
    while (n--)
    {
        y = 0;
        scanf("%d%d%lf%lf", &a, &b, &g1, &g2);
        while (a <= b)
        {
            a += (a * (g1 / 100));
            b += (b * (g2 / 100));
            y++;
            if (y > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (y <= 100)
        {
            printf("%d anos.\n", y);
        }
    }
}