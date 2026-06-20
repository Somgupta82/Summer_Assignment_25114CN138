#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter n1";
    cin >> n1;
    int arr1[n1];
    cout << "enter elements of arr1";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter n2";
    cin >> n2;
    int arr2[n2];
    cout << "enter elements for arr2";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "merged array:-";
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}