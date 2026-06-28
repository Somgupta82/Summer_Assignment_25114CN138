#include <iostream>
using namespace std;

struct Bank
{
    int accNo;
    string name;
    float balance;
};

int main()
{
    Bank b[100];
    int n = 0, choice, acc, i;
    float amount;

    do
    {
        cout << "\n--- Bank Account Management System ---";
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Check Balance";
        cout << "\n5. Search Account";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Account Number: ";
            cin >> b[n].accNo;
            cin.ignore();

            cout << "Enter Account Holder Name: ";
            getline(cin, b[n].name);

            cout << "Enter Initial Balance: ";
            cin >> b[n].balance;

            n++;
            cout << "Account created successfully!\n";
            break;

        case 2:
            cout << "\nEnter Account Number: ";
            cin >> acc;

            for (i = 0; i < n; i++)
            {
                if (b[i].accNo == acc)
                {
                    cout << "Enter Deposit Amount: ";
                    cin >> amount;
                    b[i].balance += amount;
                    cout << "Amount deposited successfully!\n";
                    break;
                }
            }

            if (i == n)
                cout << "Account not found!\n";
            break;

        case 3:
            cout << "\nEnter Account Number: ";
            cin >> acc;

            for (i = 0; i < n; i++)
            {
                if (b[i].accNo == acc)
                {
                    cout << "Enter Withdraw Amount: ";
                    cin >> amount;

                    if (amount <= b[i].balance)
                    {
                        b[i].balance -= amount;
                        cout << "Withdrawal successful!\n";
                    }
                    else
                    {
                        cout << "Insufficient balance!\n";
                    }
                    break;
                }
            }

            if (i == n)
                cout << "Account not found!\n";
            break;

        case 4:
            cout << "\nEnter Account Number: ";
            cin >> acc;

            for (i = 0; i < n; i++)
            {
                if (b[i].accNo == acc)
                {
                    cout << "Account Holder: " << b[i].name << endl;
                    cout << "Current Balance: " << b[i].balance << endl;
                    break;
                }
            }

            if (i == n)
                cout << "Account not found!\n";
            break;

        case 5:
            cout << "\nEnter Account Number to search: ";
            cin >> acc;

            for (i = 0; i < n; i++)
            {
                if (b[i].accNo == acc)
                {
                    cout << "Account Found!\n";
                    cout << "Name: " << b[i].name << endl;
                    cout << "Balance: " << b[i].balance << endl;
                    break;
                }
            }

            if (i == n)
                cout << "Account not found!\n";
            break;

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}