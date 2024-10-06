#include<stdio.h>
int main()
{
    int a[4], sum1, sum2, i;
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    sum1 = a[2] + a[3];
    sum2 = a[0] + a[1];
    if(a[1] > a[2] && a[3] > a[0])
    {
        if(sum1 > sum2)
        {
            if(a[2] > 0 && a[3] > 0)
            {
                if(a[0] % 2 == 0)
                {
                    printf("Valores aceitos\n");
                }
            }
        }
    }

    else
    {
        printf("Valores nao aceitos\n");
    }


    return 0;

}
