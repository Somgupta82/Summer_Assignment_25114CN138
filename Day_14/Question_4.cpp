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
    cout << "duplicate elements are:";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                cout << array[i] << endl;
                break;
            }
            else
            {
                cout << "not duplicate elements";
                break;
            }
        }
    }

       return 0;
}