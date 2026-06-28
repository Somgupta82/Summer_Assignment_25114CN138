#include <iostream>
using namespace std;

struct Ticket
{
    int ticketNo;
    string name;
    string destination;
    bool booked;
};

int main()
{
    Ticket t[100];
    int n = 0, choice, ticketNo, i;

    do
    {
        cout << "\n--- Ticket Booking System ---";
        cout << "\n1. Book Ticket";
        cout << "\n2. View Bookings";
        cout << "\n3. Search Ticket";
        cout << "\n4. Cancel Ticket";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Ticket Number: ";
            cin >> t[n].ticketNo;
            cin.ignore();

            cout << "Enter Passenger Name: ";
            getline(cin, t[n].name);

            cout << "Enter Destination: ";
            getline(cin, t[n].destination);

            t[n].booked = true;
            n++;

            cout << "Ticket booked successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No bookings found!\n";
            }
            else
            {
                cout << "\nBooked Tickets:\n";
                for (i = 0; i < n; i++)
                {
                    if (t[i].booked)
                    {
                        cout << "Ticket No: " << t[i].ticketNo
                             << ", Name: " << t[i].name
                             << ", Destination: " << t[i].destination
                             << endl;
                    }
                }
            }
            break;

        case 3:
            cout << "\nEnter Ticket Number to search: ";
            cin >> ticketNo;

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    cout << "Ticket Found!\n";
                    cout << "Passenger: " << t[i].name << endl;
                    cout << "Destination: " << t[i].destination << endl;

                    if (t[i].booked)
                        cout << "Status: Booked\n";
                    else
                        cout << "Status: Cancelled\n";
                    break;
                }
            }

            if (i == n)
                cout << "Ticket not found!\n";
            break;

        case 4:
            cout << "\nEnter Ticket Number to cancel: ";
            cin >> ticketNo;

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    if (t[i].booked)
                    {
                        t[i].booked = false;
                        cout << "Ticket cancelled successfully!\n";
                    }
                    else
                    {
                        cout << "Ticket already cancelled!\n";
                    }
                    break;
                }
            }

            if (i == n)
                cout << "Ticket not found!\n";
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}