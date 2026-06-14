#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter size";
    cin >> n;
    int array[n];
    cout << "enter elements";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int largest = array[0];
    int second = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > largest)
        {
            second = largest;
            largest = array[i];
        }
        else if (array[i] > second && array[i] != largest)
        {
            second = array[i];
        }
    }
    cout << "second largest=" << second;
    return 0;
}