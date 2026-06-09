#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int a = 0, b = 1;
    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main()
{
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;
    fibonacci(terms);
    return 0;
}