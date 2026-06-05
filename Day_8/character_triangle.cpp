#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number  ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a = a + 1;
        }
        cout << endl;
    }

    return 0;
}