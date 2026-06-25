#include <iostream>
using namespace std;

int main()
{
    string words[5] = {"apple", "hi", "banana", "cat", "elephant"};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (words[i].length() > words[j].length())
            {
                swap(words[i], words[j]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
        cout << words[i] << endl;

    return 0;
}