#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int arr[n], temp[100], j = 0;
    cout << "enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    while (j < n)
    {
        temp[j] = 0;
        j++;
    }
    cout << "array after moving zeroes:";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}