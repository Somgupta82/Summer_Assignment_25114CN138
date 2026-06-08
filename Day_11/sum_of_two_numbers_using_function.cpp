#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int x, y;
    cout << "enter the value of x and y:";
    cin >> x >> y;
    cout << "sum=" << sum(x, y);
    cout << endl;
    return 0;
}