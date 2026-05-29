#include <stdio.h>
int main()
{
    int n, i, sum = 0, rev = 0;
    printf("enter the number:");
    scanf("%d", &n);
    while (n != 0)
    {
        i = n % 10;
        sum = sum + i;
        rev = rev * 10 + i;
        n = n / 10;
    }
    if (sum == rev)
        printf("palindrome");
    else
        printf("not palindrome");
}