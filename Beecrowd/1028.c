#include<stdio.h>
int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}
int main()
{
    int n, x, y;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &x, &y);
        printf("%d\n", gcd(x, y));
    }
    
}