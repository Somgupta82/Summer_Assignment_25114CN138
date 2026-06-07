#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // spaces -  n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // num1:i+1
        for (int k = 1; k <= i + 1; k++)
        {
            cout << k;
        }
        // num2
        for (int k = i; k > 0; k--)
        {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}