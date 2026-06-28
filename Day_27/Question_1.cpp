#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, roll, i;

    do
    {
        cout << "\n--- Student Record Management System ---";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Delete Student";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[n].roll;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, s[n].name);
            cout << "Enter Marks: ";
            cin >> s[n].marks;
            n++;
            cout << "Student added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo records found!\n";
            }
            else
            {
                cout << "\nStudent Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "Roll: " << s[i].roll
                         << ", Name: " << s[i].name
                         << ", Marks: " << s[i].marks << endl;
                }
            }
            break;

        case 3:
            cout << "\nEnter Roll Number to search: ";
            cin >> roll;
            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cout << "Record Found!\n";
                    cout << "Name: " << s[i].name
                         << "\nMarks: " << s[i].marks << endl;
                    break;
                }
            }
            if (i == n)
                cout << "Record not found!\n";
            break;

        case 4:
            cout << "\nEnter Roll Number to delete: ";
            cin >> roll;
            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
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