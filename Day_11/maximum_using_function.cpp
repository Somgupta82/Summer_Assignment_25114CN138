#include <iostream>
using namespace std;
int maximum(int a, int b)
{
    int max = (a > b) ? a : b;
    return max;
}
int main()
{
    int x, y;
    cout << "enter the value of x and y:";
    cin >> x >> y;
    cout << "maximum is=" << maximum(x, y);
    cout << endl;
    return 0;
}