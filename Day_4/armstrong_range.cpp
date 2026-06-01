#include <iostream>
using namespace std;
int main()
{
    int start, end, n, temp, rem, sum;
    cout << "enter the starting number:";
    cin >> start;
    cout << "enter the ending number:";
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        n = i;
        temp = n;
        sum = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }
        if (sum == n)
        {
            cout << n << " ";
        }
    }
}