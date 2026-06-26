#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    char citizen, registered;
    cout << "====[VOTING ELIGIBILITY SYSTEM]====\n";
    cout << "enter your age:";
    cin >> age;

    cout << "enter your nationality(y/n):";
    cin >> citizen;

    cout << "are you registered(y/n) ";
    cin >> registered;

    cout << "\n---Result---\n";

    if (age < 18)
    {
        cout << "you are not eligible";
    }
    else if (citizen != 'y' && citizen != 'Y')
    {
        cout << "you are not eligible";
    }
    else if (registered != 'y' && registered != 'Y')
    {
        cout << "you are not eligible. must be registered";
    }
    else
    {
        cout << "you are  eligible";
    }
    return 0;
}