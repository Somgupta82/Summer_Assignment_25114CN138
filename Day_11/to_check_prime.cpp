#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}
int main()
{
    int x;
    cout << "enter the value of x:";
    cin >> x;
    cout << isPrime(x) << endl;
    return 0;
}