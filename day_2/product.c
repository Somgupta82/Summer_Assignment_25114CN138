#include <stdio.h>
int main()
{
    int n, product = 1, digit;
    printf("enter the value of n:");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        product = product * digit;
        n = n / 10;
    }
    printf("product of digits =%d", product);
    return 0;
}