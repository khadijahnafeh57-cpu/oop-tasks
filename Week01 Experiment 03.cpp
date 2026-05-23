#include <iostream>
using namespace std;

struct Employee
{
    int empNumber;
    float compensation;
};

// display function
void display(Employee e)
{
    cout << "Employee Number: " << e.empNumber << endl;
    cout << "Compensation: $" << e.compensation << endl;
    cout << "----------------------" << endl;
}

int main()
{
    Employee e1, e2, e3;

    cout << "Enter data for Employee 1:\n";
    cin >> e1.empNumber >> e1.compensation;

    cout << "Enter data for Employee 2:\n";
    cin >> e2.empNumber >> e2.compensation;

    cout << "Enter data for Employee 3:\n";
    cin >> e3.empNumber >> e3.compensation;

    cout << "\n--- Employee Details ---\n";

    display(e1);
    display(e2);
    display(e3);

    return 0;
}
