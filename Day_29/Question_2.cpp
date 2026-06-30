#include <iostream>
using namespace std;

int main()
{
    int arr[100], n = 0, choice, i, pos, value;

    do
    {
        cout << "\n===== Array Operation Menu =====";
        cout << "\n1. Insert Elements";
        cout << "\n2. Display Elements";
        cout << "\n3. Search Element";
        cout << "\n4. Update Element";
        cout << "\n5. Delete Element";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "How many elements? ";
            cin >> n;
            cout << "Enter elements: ";
            for (i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            break;

        case 2:
            cout << "Array elements are: ";
            for (i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            break;

        case 3:
            cout << "Enter value to search: ";
            cin >> value;
            for (i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    cout << "Element found at position " << i + 1;
                    break;
                }
            }
            if (i == n)
                cout << "Element not found!";
            break;

        case 4:
            cout << "Enter position to update: ";
            cin >> pos;
            if (pos >= 1 && pos <= n)
            {
                cout << "Enter new value: ";
                cin >> arr[pos - 1];
            }
            else
            {
                cout << "Invalid position!";
            }
            break;

        case 5:
            cout << "Enter position to delete: ";
            cin >> pos;
            if (pos >= 1 && pos <= n)
            {
                for (i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Element deleted successfully!";
            }
            else
            {
                cout << "Invalid position!";
            }
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