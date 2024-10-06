#include<stdio.h>
int main()
{
    int long long unsigned x, y;
    while (scanf("%lu %lu", &x, &y) != EOF)
    {
        printf("%lu\n", x^y);
    }
    
}