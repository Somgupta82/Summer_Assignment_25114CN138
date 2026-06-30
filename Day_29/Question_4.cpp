#include <iostream>
using namespace std;

struct Item
{
    int id;
    string name;
    int quantity;
    float price;
};

int main()
{
    Item items[100];
    int n = 0, choice, i, searchId;

    do
    {
        cout << "\n===== Inventory Management System =====";
        cout << "\n1. Add Item";
        cout << "\n2. Display Items";
        cout << "\n3. Search Item";
        cout << "\n4. Update Item";
        cout << "\n5. Delete Item";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Item ID: ";
            cin >> items[n].id;
            cout << "Enter Item Name: ";
            cin >> items[n].name;
            cout << "Enter Quantity: ";
            cin >> items[n].quantity;
            cout << "Enter Price: ";
            cin >> items[n].price;
            n++;
            cout << "Item added successfully!";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No items in inventory!";
            }
            else
            {
                cout << "\nID\tName\tQty\tPrice\n";
                for (i = 0; i < n; i++)
                {
                    cout << items[i].id << "\t"
                         << items[i].name << "\t"
                         << items[i].quantity << "\t"
                         << items[i].price << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Item ID to search: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (items[i].id == searchId)
                {
                    cout << "Item Found: "
                         << items[i].name
                         << ", Qty: " << items[i].quantity
                         << ", Price: " << items[i].price;
                    break;
                }
            }
            if (i == n)
                cout << "Item not found!";
            break;

        case 4:
            cout << "Enter Item ID to update: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (items[i].id == searchId)
                {
                    cout << "Enter new Name: ";
                    cin >> items[i].name;
                    cout << "Enter new Quantity: ";
                    cin >> items[i].quantity;
                    cout << "Enter new Price: ";
                    cin >> items[i].price;
                    cout << "Item updated successfully!";
                    break;
                }
            }
            if (i == n)
                cout << "Item not found!";
            break;

        case 5:
            cout << "Enter Item ID to delete: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (items[i].id == searchId)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        items[j] = items[j + 1];
                    }
                    n--;
                    cout << "Item deleted successfully!";
                    break;
                }
            }
            if (i == n)
                cout << "Item not found!";
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