#include <iostream>
using namespace std;

int roll[100], marks[100], n = 0;
string name[100];

// Function to add student
void addStudent()
{
    cout << "Enter Roll Number: ";
    cin >> roll[n];
    cout << "Enter Name: ";
    cin >> name[n];
    cout << "Enter Marks: ";
    cin >> marks[n];
    n++;
    cout << "Student added successfully!\n";
}

// Function to display students
void displayStudents()
{
    if (n == 0)
    {
        cout << "No records found!\n";
        return;
    }

    cout << "\nRoll\tName\tMarks\n";
    for (int i = 0; i < n; i++)
    {
        cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
    }
}

// Function to search student
void searchStudent()
{
    int searchRoll;
    cout << "Enter Roll Number to search: ";
    cin >> searchRoll;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == searchRoll)
        {
            cout << "Student Found: " << name[i]
                 << ", Marks: " << marks[i] << endl;
            return;
        }
    }
    cout << "Student not found!\n";
}

// Function to update student
void updateStudent()
{
    int searchRoll;
    cout << "Enter Roll Number to update: ";
    cin >> searchRoll;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == searchRoll)
        {
            cout << "Enter New Name: ";
            cin >> name[i];
            cout << "Enter New Marks: ";
            cin >> marks[i];
            cout << "Record updated successfully!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

// Function to delete student
void deleteStudent()
{
    int searchRoll;
    cout << "Enter Roll Number to delete: ";
    cin >> searchRoll;

    for (int i = 0; i < n; i++)
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
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Student Management System =====";
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
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}