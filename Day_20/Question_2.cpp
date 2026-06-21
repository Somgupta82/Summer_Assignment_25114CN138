#include <iostream>
using namespace std;
int main()
{
    int n, arr[10][10];
    ;
    cout << "enter n ";
    cin >> n;

    cout << "enter matrix elements";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> arr[i][j];
        }
    }
    bool symmetric = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }
    if (symmetric)
        cout << "symmetric matrix";
    else
        cout << "not symmetric";
    return 0;
}