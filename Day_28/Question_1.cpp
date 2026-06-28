#include <iostream>
using namespace std;

struct Book
{
    int id;
    string name;
    string author;
    bool issued;
};

int main()
{
    Book b[100];
    int n = 0, choice, id, i;

    do
    {
        cout << "\n--- Library Management System ---";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Book ID: ";
            cin >> b[n].id;
            cin.ignore();

            cout << "Enter Book Name: ";
            getline(cin, b[n].name);

            cout << "Enter Author Name: ";
            getline(cin, b[n].author);

            b[n].issued = false;
            n++;

            cout << "Book added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No books available!\n";
            }
            else
            {
                cout << "\nBook Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "ID: " << b[i].id
                         << ", Name: " << b[i].name
                         << ", Author: " << b[i].author;

                    if (b[i].issued)
                        cout << " (Issued)";
                    else
                        cout << " (Available)";

                    cout << endl;
                }
            }
            break;

        case 3:
            cout << "\nEnter Book ID to search: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    cout << "Book Found!\n";
                    cout << "Name: " << b[i].name << endl;
                    cout << "Author: " << b[i].author << endl;

                    if (b[i].issued)
                        cout << "Status: Issued\n";
                    else
                        cout << "Status: Available\n";
                    break;
                }
            }

            if (i == n)
                cout << "Book not found!\n";
            break;

        case 4:
            cout << "\nEnter Book ID to issue: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    if (!b[i].issued)
                    {
                        b[i].issued = true;
                        cout << "Book issued successfully!\n";
                    }
                    else
                    {
                        cout << "Book already issued!\n";
                    }
                    break;
                }
            }

            if (i == n)
                cout << "Book not found!\n";
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