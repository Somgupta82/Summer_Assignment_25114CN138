#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "n1=";
    cin >> n1;
    int a[n1];
    cout << "enter array1 elements";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << "n2=";
    cin >> n2;
    int b[n2];
    cout << "enter array2 elements";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    cout << "Union: ";

    for (int i = 0; i < n1; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n2; i++)
    {
        bool found = false;

        for (int j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << b[i] << " ";
        }
    }

    return 0;
}