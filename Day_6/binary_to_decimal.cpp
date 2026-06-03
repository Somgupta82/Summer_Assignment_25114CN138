#include <iostream>
using namespace std;

int main()
{
    long long binary;
    cin >> binary;

    int decimal = 0;
    int base = 1;

    while (binary > 0)
    {
        int lastDigit = binary % 10;
        decimal = decimal + lastDigit * base;

        base = base * 2;
        binary = binary / 10;
    }

    cout << decimal;

    return 0;
}