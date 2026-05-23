#include <iostream>
using namespace std;

class Payroll
{
private:
    double hourlyRate;
    double hoursWorked;
    double totalPay;

public:
    // constructor
    Payroll()
    {
        hourlyRate = 10.0;   // you can change rate if teacher gives value
        hoursWorked = 0;
        totalPay = 0;
    }

    void setHours(double h)
    {
        hoursWorked = h;
    }

    void calculatePay()
    {
        totalPay = hourlyRate * hoursWorked;
    }

    double getPay()
    {
        return totalPay;
    }
};

int main()
{
    Payroll emp[7];
    double hours;

    // input hours for 7 employees
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter hours worked for employee " << i + 1 << ": ";
        cin >> hours;

        emp[i].setHours(hours);
        emp[i].calculatePay();
    }

    // display pay
    cout << "\n--- Gross Pay ---\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "Employee " << i + 1 << " Pay: " << emp[i].getPay() << endl;
    }

    return 0;
}
