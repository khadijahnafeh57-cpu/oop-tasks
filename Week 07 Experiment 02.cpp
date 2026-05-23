#include <iostream>
using namespace std;

class Month
{
private:
    string name;
    int monthNumber;

    string getMonthName(int n)
    {
        string months[] = {"", "January", "February", "March", "April",
                           "May", "June", "July", "August",
                           "September", "October", "November", "December"};
        return months[n];
    }

public:
    // Default constructor
    Month()
    {
        monthNumber = 1;
        name = "January";
    }

    // Constructor with name
    Month(string n)
    {
        string months[] = {"", "January", "February", "March", "April",
                           "May", "June", "July", "August",
                           "September", "October", "November", "December"};

        name = n;

        for (int i = 1; i <= 12; i++)
        {
            if (months[i] == n)
            {
                monthNumber = i;
                break;
            }
        }
    }

    // Constructor with number
    Month(int n)
    {
        monthNumber = n;
        name = getMonthName(n);
    }

    // Setters
    void setName(string n)
    {
        name = n;
    }

    void setMonthNumber(int n)
    {
        monthNumber = n;
        name = getMonthName(n);
    }

    // Getters
    string getName()
    {
        return name;
    }

    int getMonthNumber()
    {
        return monthNumber;
    }

    // Prefix ++
    Month operator++()
    {
        monthNumber++;
        if (monthNumber > 12)
            monthNumber = 1;

        name = getMonthName(monthNumber);
        return *this;
    }

    // Postfix ++
    Month operator++(int)
    {
        Month temp = *this;
        monthNumber++;
        if (monthNumber > 12)
            monthNumber = 1;

        name = getMonthName(monthNumber);
        return temp;
    }

    // Prefix --
    Month operator--()
    {
        monthNumber--;
        if (monthNumber < 1)
            monthNumber = 12;

        name = getMonthName(monthNumber);
        return *this;
    }

    // Postfix --
    Month operator--(int)
    {
        Month temp = *this;
        monthNumber--;
        if (monthNumber < 1)
            monthNumber = 12;

        name = getMonthName(monthNumber);
        return temp;
    }

    // Friend operator >>
    friend istream &operator>>(istream &in, Month &m);

    // Friend operator <<
    friend ostream &operator<<(ostream &out, Month m);
};

// input operator
istream &operator>>(istream &in, Month &m)
{
    cout << "Enter month number (1-12): ";
    in >> m.monthNumber;
    m.name = m.getMonthName(m.monthNumber);
    return in;
}

// output operator
ostream &operator<<(ostream &out, Month m)
{
    out << m.name << " (" << m.monthNumber << ")";
    return out;
}

int main()
{
    Month m1;
    cout << "Default: " << m1 << endl;

    Month m2("March");
    cout << "From name: " << m2 << endl;

    Month m3(7);
    cout << "From number: " << m3 << endl;

    ++m3;
    cout << "After ++: " << m3 << endl;

    m3--;
    cout << "After --: " << m3 << endl;

    cin >> m1;
    cout << "Input month: " << m1 << endl;

    return 0;
}
