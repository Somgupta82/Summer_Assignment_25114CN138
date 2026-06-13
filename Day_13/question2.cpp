#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter size";
    cin >> n;
    int array[n];
    cout << "enter elements";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        sum = sum + array[i];
    }
    float avg = (float)sum / n;
    cout << "sum=" << sum << endl;
    cout << "average" << avg;
    return 0;
}