#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, c;
    cout << "enter a number:";
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;

        cout << c << endl;
        a = b;
        b = c;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, c;
    cout << "enter a number:";
    cin >> n;
    cout << a << "\n";
    cout << b << "\n";
    for (int i = 3; i <= n; i++)
    {

        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
    return 0;
}
