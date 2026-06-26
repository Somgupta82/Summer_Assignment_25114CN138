#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;
    cout << "guess number between 1 to 100:\n";
    do
    {
        cin >> guess;
        attempts++;
        if (guess < secret)
            cout << "too low! try again.";
        else if (guess > secret)
            cout << "too high! try again";
        else
            cout << "Correct! you guess right,You take" << attempts << " attempts\n";

    } while (guess != secret);
    return 0;
}