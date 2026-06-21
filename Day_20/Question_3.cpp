#include <iostream>
using namespace std;
int main()
{
    int a[10][10], r, c;
    cout << "enter r and c:";
    cin >> r >> c;
    cout << "enter rows and elements:";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
        cout << "row" << i + 1 << "sum=" << sum << endl;
    }
    return 0;
}