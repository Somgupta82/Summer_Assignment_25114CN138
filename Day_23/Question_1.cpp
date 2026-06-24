#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    int count = 0, i = 0;
    cout << "enter a string ";
    cin >> str;
    for (i = 0; i < str.length(); i++)
    {

        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "first non repeating character=" << str[i] << endl;
            return 0;
        }
    }
    cout << "no non repeating character.";
    return 0;
}