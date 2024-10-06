#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n5,avg,avg2;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    avg = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4 ) / 10;
    printf("Media: %.1f\n", avg);
    if(avg >= 7)
    {
        printf("Aluno aprovado.\n");
    }

    else if(avg >= 5 && avg < 7)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        avg2 = (avg + n5) / 2;
        if(avg2 > 5)
        {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", avg2);
        }
        else if(avg < 5)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", avg2);
        }
    }
    else
    {
        printf("Aluno reprovado.\n");
    }


}
