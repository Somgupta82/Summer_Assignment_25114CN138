#include <iostream>
using namespace std;
int main()
{
    int n, temp, rem, fact, sum = 0;
    cout << "enter a number:";
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == n)
    {
        cout << "the number is a strong number";
    }
    else
    {
        cout << "the number is not a strong number.";
    }
    return 0;
}
