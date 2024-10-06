#include<stdio.h>
int main()
{
    int x,y;
    float p1, p2, p3, p4, p5;
    scanf("%d%d", &x, &y);
    p1 = 4 * y;
    p2 = 4.5 * y;
    p3 = 5 * y;
    p4 = 2 * y;
    p5 = 1.5 * y;
    switch(x)
    {
        case 1:
            {
                printf("Total: R$ %.2f\n", p1);
                break;
            }
        case 2:
            {
                printf("Total: R$ %.2f\n", p2);
                break;
            }
        case 3:
            {
                printf("Total: R$ %.2f\n", p3);
                break;
            }
        case 4:
            {
                printf("Total: R$ %.2f\n", p4);
                break;
            }
        case 5:
            {
                printf("Total: R$ %.2f\n", p5);
                break;
            }
    }


    return 0;
}
