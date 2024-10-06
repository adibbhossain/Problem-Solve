#include <stdio.h>
int count;
int fib(int number)
{
    count++;
    if (number == 0)
        return 0;
    else if (number == 1)
        return 1;
    else
        return fib(number - 1) + fib(number - 2);
}
int main()
{
    int n, number;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &number);
        count = 0;
        printf("fib(%d) = %d calls = %d\n", number, count - 1, fib(number));
    }
}