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
        char ch = 'A';
        for (int k = 1; k <= i + 1; k++)
        {
            cout << ch;
            ch++;
        }
        // num2
        ch = ch - 2;
        for (int k = i - 1; k >= 0; k--)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
    return 0;
}
