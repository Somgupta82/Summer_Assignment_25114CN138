#include <iostream>
using namespace std;
int main()
{
    int answer, score = 0;
    cout << "===QUIZ APP===\n";
    cout << "Q1.What is 2+2?\n";
    cout << "1.3 2.4 3.5 4.6\n";
    cout << "answer";
    cin >> answer;
    if (answer == 2)
    {
        cout << "correct!\n";
        score++;
    }
    else
    {
        cout << "wrong!   answer is 2\n";
    }
    cout << "Q2.capital of france?\n";
    cout << "1.london 2.berlin 3.paris 4.rome\n";
    cout << "answer:";
    cin >> answer;
    if (answer == 3)
    {
        cout << "correct!\n";
        score++;
    }
    else
    {
        cout << "wrong! answer is3\n";
    }

    cout << "\nQ3.How many days in a week?\n";
    cout << "1.5 2.6 3.8 4.7\n";
    cout << "answer:";
    cin >> answer;
    if (answer == 4)
    {
        cout << "correct!\n";
        score++;
    }
    else
    {
        cout << "wrong! answer is4\n";
    }
    cout << "\n ==== Your Score" << score << "3===\n";
    if (score == 3)
        cout << "perfect\n";
    else if (score == 2)
        cout << "good\n";
    else
        cout << "keep practising!\n";
    return 0;
}