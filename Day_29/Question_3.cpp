#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int choice;

    do
    {
        cout << "\n===== String Operation Menu =====";
        cout << "\n1. Enter String";
        cout << "\n2. Display String";
        cout << "\n3. Find Length";
        cout << "\n4. Reverse String";
        cout << "\n5. Convert to Uppercase";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        cin.ignore(); // clears input buffer

        switch (choice)
        {
        case 1:
            cout << "Enter a string: ";
            getline(cin, str);
            break;

        case 2:
            cout << "String is: " << str;
            break;

        case 3:
            cout << "Length of string = " << str.length();
            break;

        case 4:
        {
            string rev = str;
            int n = rev.length();
            for (int i = 0; i < n / 2; i++)
            {
                swap(rev[i], rev[n - i - 1]);
            }
            cout << "Reversed string = " << rev;
            break;
        }

        case 5:
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
            }
            cout << "Uppercase string = " << str;
            break;

        case 6:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 6);

    return 0;
}