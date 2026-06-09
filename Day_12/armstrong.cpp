#include <iostream>
#include <cmath>
using namespace std;
int countDigits(int n)
{
    int count = 0;
    for (int temp = n; temp != 0; temp /= 10)
        count++;
    return count;
}
bool isArmstrong(int n)
{
    int digits = countDigits(n);
    int sum = 0;
    for (int temp = n; temp != 0; temp /= 10)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
    }
    return sum == n;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is NOT an Armstrong number." << endl;

    return 0;
}