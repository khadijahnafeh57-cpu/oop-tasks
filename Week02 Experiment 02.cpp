#include <iostream>
using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

int main()
{
    Date d;

    cout << "Enter date (MM/DD/YYYY): ";
    cin >> d.month >> d.day >> d.year;

    cout << "Date is: "
         << d.month << "/"
         << d.day << "/"
         << d.year;

    return 0;
}
