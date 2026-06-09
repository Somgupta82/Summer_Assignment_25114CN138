#include <iostream>
using namespace std;
bool pallindrome(int n)
{
    int numBefore = n;
    int reverse = 0;
    for (int i = 1; n > 0; i++)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    return (numBefore == reverse);
}
int main()
{
    int num;
    cout << "entere a number:";
    cin >> num;
    if (pallindrome(num))
    {
        cout << "the number is pallindrome .";
    }
    else
    {
        cout << "the number is not a pallindrome ";
        return 0;
    }
}