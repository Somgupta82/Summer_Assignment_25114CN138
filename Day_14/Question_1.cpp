#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "enter size:";
    cin >> n;
    int arr[n];
    cout << "enter the elemnts";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter element to search";
    cin >> x;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == x)
        {

            cout << "element found";
            return 0;
        }
    }

    cout << "element not found";

    return 0;
}
