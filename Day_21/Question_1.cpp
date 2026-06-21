#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cin >> str;
    int length = 0;
    while (str[length] != '\0')
        length++;
    {
        cout << "length=" << length;
    }
    return 0;
}