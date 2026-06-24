#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    int count = 0, i = 0;
    cout << "enter a string ";
    cin >> str;
    int maxCount = 0;
    char maxChar;
    for (i = 0; i < str.length(); i++)
    {
        count = 0;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }
    cout << "maximum occuring character is:" << maxChar << endl;
    cout << "frequency=" << maxCount << endl;
    return 0;
}
