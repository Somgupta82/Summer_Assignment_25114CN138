#include <iostream>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    Contact c[100];
    int n = 0, choice, i;
    string searchName;

    do
    {
        cout << "\n--- Contact Management System ---";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Delete Contact";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "\nEnter Name: ";
            getline(cin, c[n].name);

            cout << "Enter Phone Number: ";
            getline(cin, c[n].phone);

            n++;
            cout << "Contact added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No contacts found!\n";
            }
            else
            {
                cout << "\nContact List:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "Name: " << c[i].name
                         << ", Phone: " << c[i].phone << endl;
                }
            }
            break;

        case 3:
            cout << "\nEnter Name to search: ";
            getline(cin, searchName);

            for (i = 0; i < n; i++)
            {
                if (c[i].name == searchName)
                {
                    cout << "Contact Found!\n";
                    cout << "Name: " << c[i].name << endl;
                    cout << "Phone: " << c[i].phone << endl;
                    break;
                }
            }

            if (i == n)
                cout << "Contact not found!\n";
            break;

        case 4:
            cout << "\nEnter Name to delete: ";
            getline(cin, searchName);

            for (i = 0; i < n; i++)
            {
                if (c[i].name == searchName)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }
                    n--;
                    cout << "Contact deleted successfully!\n";
                    break;
                }
            }

            if (i == n)
                cout << "Contact not found!\n";
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}