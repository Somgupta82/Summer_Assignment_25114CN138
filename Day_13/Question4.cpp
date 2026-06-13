#include <iostream>
using namespace std;
int main()
{
    int n, even = 0, odd = 0;
    cout << "enter size";
    cin >> n;
    int array[n];
    cout << "enter elements";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] % 2 == 0)
            even++;
        if (array[i] % 2 != 0)
            odd++;
    }
    cout << "no of even elements are" << even << endl;
    cout << "no of odd elements are" << odd << endl;

    return 0;
}