#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1, num2;

    do
    {
        cout << "\n===== Calculator Menu =====";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice)
        {
        case 1:
            cout << "Result = " << num1 + num2;
            break;

        case 2:
            cout << "Result = " << num1 - num2;
            break;

        case 3:
            cout << "Result = " << num1 * num2;
            break;

        case 4:
            if (num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Division by zero is not allowed!";
            break;

        case 5:
            cout << "Exiting Calculator...";
            break;

        default:
            cout << "Invalid choice! Try again.";
        }

    } while (choice != 5);

    return 0;
}