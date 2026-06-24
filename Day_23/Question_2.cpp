#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    cout << "enter a string ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {

        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                cout << "first repeating character=" << str[i] << endl;
                return 0;
            }
        }
    }
    cout << "no repeating character ";
    return 0;
}