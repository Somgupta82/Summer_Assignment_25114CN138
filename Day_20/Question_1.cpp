#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    int a[10][10], b[10][10], c[10][10];
    cout << "enter rows and columns of matrix a:";
    cin >> r1 >> c1;
    cout << "enter rows and columns of matrix b:";
    cin >> r2 >> c2;
    cout << "enter elements of matrix a:";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter elements of matrix b:";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    // multiplicataion
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}