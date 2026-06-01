#include <stdio.h>
int main()
{
    int a, b, gcd;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    gcd = a;
    printf("gcd is %d", gcd);
    return 0;
}