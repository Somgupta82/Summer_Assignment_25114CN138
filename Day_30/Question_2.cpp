#include <iostream>
using namespace std;

int main()
{
    int bookId[100], n = 0, choice, searchId;
    string bookName[100], author[100];
    bool issued[100] = {false};
    int i;

    do
    {
        cout << "\n===== Mini Library System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Delete Book";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Book ID: ";
            cin >> bookId[n];
            cout << "Enter Book Name: ";
            cin >> bookName[n];
            cout << "Enter Author Name: ";
            cin >> author[n];
            n++;
            cout << "Book added successfully!";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No books available!";
            }
            else
            {
                cout << "\nID\tBook Name\tAuthor\tStatus\n";
                for (i = 0; i < n; i++)
                {
                    cout << bookId[i] << "\t"
                         << bookName[i] << "\t"
                         << author[i] << "\t"
                         << (issued[i] ? "Issued" : "Available")
                         << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to search: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (bookId[i] == searchId)
                {
                    cout << "Book Found: "
                         << bookName[i]
                         << " by " << author[i];
                    break;
                }
            }
            if (i == n)
                cout << "Book not found!";
            break;

        case 4:
            cout << "Enter Book ID to issue: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (bookId[i] == searchId)
                {
                    if (!issued[i])
                    {
                        issued[i] = true;
                        cout << "Book issued successfully!";
                    }
                    else
                    {
                        cout << "Book already issued!";
                    }
                    break;
                }
            }
            if (i == n)
                cout << "Book not found!";
            break;

        case 5:
            cout << "Enter Book ID to return: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (bookId[i] == searchId)
                {
                    if (issued[i])
                    {
                        issued[i] = false;
                        cout << "Book returned successfully!";
                    }
                    else
                    {
                        cout << "Book was not issued!";
                    }
                    break;
                }
            }
            if (i == n)
                cout << "Book not found!";
            break;

        case 6:
            cout << "Enter Book ID to delete: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (bookId[i] == searchId)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        bookId[j] = bookId[j + 1];
                        bookName[j] = bookName[j + 1];
                        author[j] = author[j + 1];
                        issued[j] = issued[j + 1];
                    }
                    n--;
                    cout << "Book deleted successfully!";
                    break;
                }
            }
            if (i == n)
                cout << "Book not found!";
            break;

        case 7:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 7);

    return 0;
}