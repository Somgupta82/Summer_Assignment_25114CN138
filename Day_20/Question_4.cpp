#include <iostream>
using namespace std;
int main()
{
    int a[10][10], r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < c; j++)
    {
        int sum = 0;
        for (int i = 0; i < r; i++)
        {
            sum += a[i][j];
        }
        cout << "columns" << j + 1 << "sum=" << sum << endl;
    }
    return 0;
}