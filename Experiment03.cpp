#include <iostream>
using namespace std;

struct Employee
{
    int employeeNumber;
    float compensation;
};

void display(Employee e)
{
    cout << "\nEmployee Number: " << e.employeeNumber << endl;
    cout << "Compensation: $" << e.compensation << endl;
}

int main()
{
    Employee e1, e2, e3;

    cout << "Enter details for Employee 1" << endl;
    cout << "Employee Number: ";
    cin >> e1.employeeNumber;
    cout << "Compensation: ";
    cin >> e1.compensation;

    cout << "\nEnter details for Employee 2" << endl;
    cout << "Employee Number: ";
    cin >> e2.employeeNumber;
    cout << "Compensation: ";
    cin >> e2.compensation;

    cout << "\nEnter details for Employee 3" << endl;
    cout << "Employee Number: ";
    cin >> e3.employeeNumber;
    cout << "Compensation: ";
    cin >> e3.compensation;

    cout << "\n--- Employee Information ---" << endl;

    display(e1);
    display(e2);
    display(e3);

    return 0;
}
