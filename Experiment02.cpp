#include <iostream>
using namespace std;

// Creating structure
struct Date
{
    int month;
    int day;
    int year;
};

int main()
{
    // Declaring structure variable
    Date d;

    // Taking input
    cout << "Enter date (MM/DD/YYYY): ";
    cin >> d.month;
    cin.ignore(); // ignores '/'

    cin >> d.day;
    cin.ignore(); // ignores '/'

    cin >> d.year;

    // Displaying output
    cout << "Entered date is: "
         << d.month << "/"
         << d.day << "/"
         << d.year;

    return 0;
}
