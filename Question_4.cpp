#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks[5];
    float total, percentage;
    char grade;
};

int main()
{
    Student s;
    int i;

    cout << "--- Marksheet Generation System ---\n";

    cout << "Enter Roll Number: ";
    cin >> s.roll;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    s.total = 0;

    // Input marks
    for (i = 0; i < 5; i++)
    {
        cout << "Enter marks of subject " << i + 1 << ": ";
        cin >> s.marks[i];
        s.total += s.marks[i];
    }

    // Calculate percentage
    s.percentage = s.total / 5;

    // Grade calculation
    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    // Display marksheet
    cout << "\n--- Student Marksheet ---\n";
    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;

    for (i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": " << s.marks[i] << endl;
    }

    cout << "Total Marks: " << s.total << endl;
    cout << "Percentage: " << s.percentage << "%" << endl;
    cout << "Grade: " << s.grade << endl;

    return 0;
}