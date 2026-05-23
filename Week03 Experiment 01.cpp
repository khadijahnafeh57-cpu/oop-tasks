#include <iostream>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    void input()
    {
        do
        {
            cout << "Enter month (1-12): ";
            cin >> month;
        } while (month < 1 || month > 12);

        do
        {
            cout << "Enter day (1-31): ";
            cin >> day;
        } while (day < 1 || day > 31);

        cout << "Enter year: ";
        cin >> year;
    }

    void printFormat1()
    {
        cout << month << "/" << day << "/" << year << endl;
    }

    void printFormat2()
    {
        string months[] = {"", "January", "February", "March", "April",
                           "May", "June", "July", "August",
                           "September", "October", "November", "December"};

        cout << months[month] << " " << day << ", " << year << endl;
    }

    void printFormat3()
    {
        string months[] = {"", "January", "February", "March", "April",
                           "May", "June", "July", "August",
                           "September", "October", "November", "December"};

        cout << day << " " << months[month] << " " << year << endl;
    }
};

int main()
{
    Date d;

    d.input();

    cout << "\n--- Date Formats ---\n";
    d.printFormat1();
    d.printFormat2();
    d.printFormat3();

    return 0;
}
