#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee e[100];
    int n = 0, choice, id, i;

    do
    {
        cout << "\n--- Employee Management System ---";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Delete Employee";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> e[n].id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, e[n].name);
            cout << "Enter Salary: ";
            cin >> e[n].salary;
            n++;
            cout << "Employee added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo records found!\n";
            }
            else
            {
                cout << "\nEmployee Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "ID: " << e[i].id
                         << ", Name: " << e[i].name
                         << ", Salary: " << e[i].salary << endl;
                }
            }
            break;

        case 3:
            cout << "\nEnter Employee ID to search: ";
            cin >> id;
            for (i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    cout << "Record Found!\n";
                    cout << "Name: " << e[i].name
                         << "\nSalary: " << e[i].salary << endl;
                    break;
                }
            }
            if (i == n)
                cout << "Record not found!\n";
            break;

        case 4:
            cout << "\nEnter Employee ID to delete: ";
            cin >> id;
            for (i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        e[j] = e[j + 1];
                    }
                    n--;
                    cout << "Record deleted successfully!\n";
                    break;
                }
            }
            if (i == n)
                cout << "Record not found!\n";
            break;

        case 5:
            cout << "\nExiting program...";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}