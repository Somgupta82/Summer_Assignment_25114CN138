#include <stdio.h>
int main()
{
    int n, prime = 1, i;
    printf("enter a number:");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("the entered number is prime");
    }
    else
    {
        printf("the entered number is not prime");
    }
    return 0;
}