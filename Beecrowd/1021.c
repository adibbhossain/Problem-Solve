#include<stdio.h>
int main()
{
    float n;
    int inpi, nota[6], moedas[6];
    scanf("%f", &n);
    inpi = n * 100;
    //NOTAS
    printf("NOTAS: \n");
    nota[0] = inpi / 10000;
    printf("%d nota(s) de R$ 100.00\n", nota[0]);
    nota[0] = inpi % 10000;
    nota[1] = nota[0] / 5000;
    printf("%d nota(s) de R$ 50.00\n", nota[1]);
    nota[1] = nota[0] % 5000;
    nota[2] = nota[1] / 2000;
    printf("%d nota(s) de R$ 20.00\n", nota[2]);
    nota[2] = nota[1] % 2000;
    nota[3] = nota[2] / 1000;
    printf("%d nota(s) de R$ 10.00\n", nota[3]);
    nota[3] = nota[2] % 1000;
    nota[4] = nota[3] / 500;
    printf("%d nota(s) de R$ 5.00\n", nota[4]);
    nota[4] = nota[3] % 500;
    nota[5] = nota[4] / 200;
    printf("%d nota(s) de R$ 2.00\n", nota[5]);

    //MOEDAS
    printf("MOEDAS: \n");
    moedas[0] = nota[4] / 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas[0]);
    moedas[0] = nota[4] % 100;
    moedas[1] = moedas[0] / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas[1]);
    moedas[1] = moedas[0] % 50;
    moedas[2] = moedas[1] / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas[2]);
    moedas[2] = moedas[1] % 25;
    moedas[3] = moedas[2] / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas[3]);
    moedas[3] = moedas[2] % 10;
    moedas[4] = moedas[3] / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas[4]);
    moedas[4] = moedas[3] % 5;
    moedas[5] = moedas[4] / 1;
    printf("%d moeda(s) de R$ 0.01\n", moedas[5]);




    return 0;


}
