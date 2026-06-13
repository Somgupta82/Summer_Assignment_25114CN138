#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size";
    cin >> n;
    int array[n];
    cout << "enter elements";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "array elements are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
