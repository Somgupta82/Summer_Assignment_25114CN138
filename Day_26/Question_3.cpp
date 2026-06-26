#include <iostream>
using namespace std;
int main()
{
    int pin = 123456;
    int enteredPin;
    float balance;
    int choice;
    float amount;
    cout << "enter PIN";
    cin >> enteredPin;
    if (enteredPin != pin)
    {
        cout << "wrong PIN! Access denied.\n";
        return 0;
    }
    cout << "welcome!\n";
    do
    {
        cout << "\n1. Check Balance\n";
        cout << "2.Deosite\n";
        cout << "3.Withdraw\n";
        cout << "4.Exit\n";
        cout << "choose:";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Balance:$" << balance << endl;
        }
        else if (choice == 2)
        {
            cout << "enter deposit amount:";
            cin >> amount;
            balance += amount;
            cout << "new balance:$" << balance << endl;
        }
        else if (choice == 3)
        {
            cout << "enter withdraw amount:";
            cin >> amount;
            if (amount > balance)
                cout << "insufficient balance:\n";
        }
        else
        {
            balance -= amount;
            cout << "new balance:$" << balance << endl;
        }

    } while (choice != 4);
    cout << "goodbye!\n";
    return 0;
}