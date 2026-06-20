#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "enter n1";
    cin >> n1;
    int a[n1];
    cout << "enter array 1 elements";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << "enter n2";
    cin >> n2;
    int b[n2];
    cout << "enter array2 elements";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    cout << "Intersection: ";

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}