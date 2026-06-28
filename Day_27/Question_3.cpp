#include <iostream>
using namespace std;

struct Salary
{
    int id;
    string name;
    float basicSalary, bonus, totalSalary;
};

int main()
{
    Salary emp[100];
    int n = 0, choice, id, i;

    do
    {
        cout << "\n--- Salary Management System ---";
        cout << "\n1. Add Employee Salary";
        cout << "\n2. Display All Records";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Salary";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";

        cin >> choice;

        // Fix invalid input
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter number only.\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            if (n >= 100)
            {
                cout << "Storage Full!\n";
                break;
            }

            cout << "Enter Employee ID: ";
            cin >> emp[n].id;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Basic Salary: ";
            cin >> emp[n].basicSalary;

            cout << "Enter Bonus: ";
            cin >> emp[n].bonus;

            emp[n].totalSalary =
                emp[n].basicSalary + emp[n].bonus;

            n++;
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                cout << emp[i].id << " "
                     << emp[i].name << " "
                     << emp[i].totalSalary << endl;
            }
            break;

        case 3:
            cout << "Enter ID: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << emp[i].name << " "
                         << emp[i].totalSalary << endl;
                    break;
                }
            }
            break;

        case 4:
            cout << "Enter ID: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << "New Basic Salary: ";
                    cin >> emp[i].basicSalary;

                    cout << "New Bonus: ";
                    cin >> emp[i].bonus;

                    emp[i].totalSalary =
                        emp[i].basicSalary + emp[i].bonus;
                }
            }
            break;

        case 5:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}