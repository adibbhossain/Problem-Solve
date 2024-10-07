#include<stdio.h>
#include<string.h>
int main()
{
    char x[20], y[20], z[20];
    char x1[20] = "vertebrado", x2[20] = "invertebrado", y1[20] = "ave", y2[20] = "mamifero", y3[20] = "inseto", y4[20] = "anelideo", z1[15] = "carnivoro", z2[10] = "onivoro", z3[15] = "herbivoro", z4[15] = "hematofago";
    scanf("%s %s %s", x, y, z);
    if(strcmp(x, x1) == 0)
    {
        if(strcmp(y, y1) == 0)
        {
            if(strcmp(z, z1) == 0)
            {
                printf("aguia\n");
            }
            else if(strcmp(z, z2) == 0)
            {
                printf("pomba\n");
            }
        }
        else if(strcmp(y, y2) == 0)
        {
            if(strcmp(z, z2) == 0)
            {
                printf("homem\n");
            }
            else if(strcmp(z, z3) == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(x, x2) == 0)
    {
        if(strcmp(y, y3) == 0)
        {
            if(strcmp(z, z4) == 0)
            {
                printf("pulga\n");
            }
            else if(strcmp(z, z3) == 0)
            {
                printf("lagarta\n");
            }
        }
        else if(strcmp(y, y4) == 0)
        {
            if(strcmp(z, z4) == 0)
            {
                printf("sanguessuga\n");
            }
            else if(strcmp(z, z2) == 0)
            {
                printf("minhoca\n");
            }
        }
    }
    
}