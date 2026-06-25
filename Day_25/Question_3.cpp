#include <iostream>
using namespace std;

int main()
{
    string names[5] = {"Ravi", "Aman", "Shivam", "Karan", "Kushal"};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (names[i] > names[j])
            {
                swap(names[i], names[j]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
        cout << names[i] << endl;

    return 0;
}