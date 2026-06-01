#include <iostream>
using namespace std;
int main()
{
    int n, temp, rem, sum = 0;
    cout << "enter a number:";
    cin >> n;
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if (sum == n)
        cout << "armstrong number";
    else
        cout << "not an armstrong number";
}