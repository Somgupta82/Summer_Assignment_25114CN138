#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int arr[n], sum = 0;
    cout << "enter " << n - 1 << " elements";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    int total = n * (n + 1) / 2;
    cout << "missing number=";

    return 0;
}