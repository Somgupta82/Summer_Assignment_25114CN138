#include <iostream>
using namespace std;

int main()
{
    int empId[100], salary[100], n = 0, choice, searchId;
    string empName[100], department[100];
    int i;

    do
    {
        cout << "\n===== Mini Employee Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Delete Employee";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> empId[n];
            cout << "Enter Employee Name: ";
            cin >> empName[n];
            cout << "Enter Department: ";
            cin >> department[n];
            cout << "Enter Salary: ";
            cin >> salary[n];
            n++;
            cout << "Employee added successfully!";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No employee records found!";
            }
            else
            {
                cout << "\nID\tName\tDepartment\tSalary\n";
                for (i = 0; i < n; i++)
                {
                    cout << empId[i] << "\t"
                         << empName[i] << "\t"
                         << department[i] << "\t\t"
                         << salary[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to search: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (empId[i] == searchId)
                {
                    cout << "Employee Found: "
                         << empName[i]
                         << ", Department: " << department[i]
                         << ", Salary: " << salary[i];
                    break;
                }
            }
            if (i == n)
                cout << "Employee not found!";
            break;

        case 4:
            cout << "Enter Employee ID to update: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (empId[i] == searchId)
                {
                    cout << "Enter new Name: ";
                    cin >> empName[i];
                    cout << "Enter new Department: ";
                    cin >> department[i];
                    cout << "Enter new Salary: ";
                    cin >> salary[i];
                    cout << "Employee record updated successfully!";
                    break;
                }
            }
            if (i == n)
                cout << "Employee not found!";
            break;

        case 5:
            cout << "Enter Employee ID to delete: ";
            cin >> searchId;
            for (i = 0; i < n; i++)
            {
                if (empId[i] == searchId)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        empId[j] = empId[j + 1];
                        empName[j] = empName[j + 1];
                        department[j] = department[j + 1];
                        salary[j] = salary[j + 1];
                    }
                    n--;
                    cout << "Employee deleted successfully!";
                    break;
                }
            }
            if (i == n)
                cout << "Employee not found!";
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