#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "enter n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the sum";
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[j] << " " << arr[j];
            }
        }
    }
    return 0;
}