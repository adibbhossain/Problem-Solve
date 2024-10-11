#include<stdio.h>
int main()
{
    int x,i;
    for(i = 2; i <=100; i++)
    {
        x = i % 2;
        if(x == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
