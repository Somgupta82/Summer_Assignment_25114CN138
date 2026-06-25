#include <iostream>
using namespace std;
int main()
{
    string str, word = "", longest = "";
    getline(cin, str);
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word += str[i];
        }
        else
        {
            if (word.length() > longest.length())
            {
                longest = word;
            }
            word = "";
        }
    }
    cout << "longest word:" << longest;
}