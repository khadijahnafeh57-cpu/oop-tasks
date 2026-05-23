#include <iostream>
using namespace std;

struct Employee
{
    int empNo;
    float salary;
};

// display function
void display(Employee e)
{
    cout << "Employee No: " << e.empNo << endl;
    cout << "Salary: $" << e.salary << endl;
    cout << "----------------------" << endl;
}

int main()
{
    Employee e1, e2, e3;

    cout << "Enter details of Employee 1:\n";
    cout << "Employee No: ";
    cin >> e1.empNo;
    cout << "Salary: ";
    cin >> e1.salary;

    cout << "\nEnter details of Employee 2:\n";
    cout << "Employee No: ";
    cin >> e2.empNo;
    cout << "Salary: ";
    cin >> e2.salary;

    cout << "\nEnter details of Employee 3:\n";
    cout << "Employee No: ";
    cin >> e3.empNo;
    cout << "Salary: ";
    cin >> e3.salary;

    cout << "\n--- Employee Details ---\n";

    display(e1);
    display(e2);
    display(e3);

    return 0;
}
