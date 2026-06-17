#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, max = 0, element;
    cout << "enter n";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            element = arr[i];
        }
    }
    cout << "element=" << element << endl;
    cout << "frequency" << max;
    return 0;
}