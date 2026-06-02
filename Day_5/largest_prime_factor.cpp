#include <iostream>
using namespace std;
int main()
{
    int n, largestFactor = 0;
    cout << "enter a number:";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            largestFactor = i;
            n = n / i;
        }
    }
    cout << "largest prime factor is:" << largestFactor;
    return 0;
}