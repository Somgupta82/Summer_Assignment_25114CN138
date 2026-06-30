#include <iostream>
using namespace std;

int main()
{
    int roll[100], marks[100];
    string name[100];
    int n = 0, choice, i, searchRoll;

    do
    {
        cout << "\n===== Student Record System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> roll[n];
            cout << "Enter Name: ";
            cin >> name[n];
            cout << "Enter Marks: ";
            cin >> marks[n];
            n++;
            cout << "Student added successfully!";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No records found!";
            }
            else
            {
                cout << "\nRoll\tName\tMarks\n";
                for (i = 0; i < n; i++)
                {
                    cout << roll[i] << "\t"
                         << name[i] << "\t"
                         << marks[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to search: ";
            cin >> searchRoll;
            for (i = 0; i < n; i++)
            {
                if (roll[i] == searchRoll)
                {
                    cout << "Student Found: "
                         << name[i]
                         << ", Marks: " << marks[i];
                    break;
                }
            }
            if (i == n)
                cout << "Student not found!";
            break;

        case 4:
            cout << "Enter Roll Number to update: ";
            cin >> searchRoll;
            for (i = 0; i < n; i++)
            {
                if (roll[i] == searchRoll)
                {
                    cout << "Enter new Name: ";
                    cin >> name[i];
                    cout << "Enter new Marks: ";
                    cin >> marks[i];
                    cout << "Record updated successfully!";
                    break;
                }
            }
            if (i == n)
                cout << "Student not found!";
            break;

        case 5:
            cout << "Enter Roll Number to delete: ";
            cin >> searchRoll;
            for (i = 0; i < n; i++)
            {
                if (roll[i] == searchRoll)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        marks[j] = marks[j + 1];
                    }
                    n--;
                    cout << "Record deleted successfully!";
                    break;
                }
            }
            if (i == n)
                cout << "Student not found!";
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