#include <iostream>
using namespace std;
int main()
{
    int n, x, count = 0;
    cout << "enter the size";
    cin >> n;
    int arr[n];
    cout << "enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter elementt to find frequency:";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    cout << "frequency=" << count;
    return 0;
}