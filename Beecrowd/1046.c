#include<stdio.h>
int main()
{
    int x,y,i,hrs=0;
    scanf("%d%d", &x, &y);
    if(x < y && x < 24 && y < 24)
    {
        for(i = x; i < y; i++)
        {
            hrs++;
        }
        printf("O JOGO DUROU %d HORA(S)\n", hrs);
    }
    else if(x > y && x > 12 && x < 24 && y < 24)
    {
        x = x - 12;
        y = y + 12;
        for(i = x; i < y; i++)
        {
            hrs++;
        }
        printf("O JOGO DUROU %d HORA(S)\n", hrs);
    }
    else if(x == y && x < 24 && y < 24)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;


}
