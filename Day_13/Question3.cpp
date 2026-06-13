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
    int largest = array[0];
    int smallest = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
            largest = array[i];
        if (array[i] < smallest)
            smallest = array[i];
    }
    cout << "largest" << largest << endl;
    cout << "smallest" << smallest << endl;
    return 0;
}