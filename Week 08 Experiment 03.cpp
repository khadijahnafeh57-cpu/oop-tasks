#include <iostream>
using namespace std;

// Base class
class Employee
{
protected:
    string name;
    int empNumber;
    string hireDate;

public:
    Employee()
    {
        name = "";
        empNumber = 0;
        hireDate = "";
    }

    Employee(string n, int e, string h)
    {
        name = n;
        empNumber = e;
        hireDate = h;
    }

    void setName(string n) { name = n; }
    void setEmpNumber(int e) { empNumber = e; }
    void setHireDate(string h) { hireDate = h; }

    string getName() { return name; }
    int getEmpNumber() { return empNumber; }
    string getHireDate() { return hireDate; }
};

// Derived class
class ShiftSupervisor : public Employee
{
private:
    double annualSalary;
    double annualBonus;

public:
    ShiftSupervisor()
    {
        annualSalary = 0;
        annualBonus = 0;
    }

    ShiftSupervisor(string n, int e, string h, double s, double b)
        : Employee(n, e, h)
    {
        annualSalary = s;
        annualBonus = b;
    }

    void setSalary(double s) { annualSalary = s; }
    void setBonus(double b) { annualBonus = b; }

    double getSalary() { return annualSalary; }
    double getBonus() { return annualBonus; }

    void display()
    {
        cout << "\n--- Shift Supervisor Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << empNumber << endl;
        cout << "Hire Date: " << hireDate << endl;
        cout << "Annual Salary: " << annualSalary << endl;
        cout << "Annual Bonus: " << annualBonus << endl;
    }
};

int main()
{
    ShiftSupervisor s1;

    // input using setters (simple CP style)
    s1.setName("Sara");
    s1.setEmpNumber(201);
    s1.setHireDate("01-01-2023");
    s1.setSalary(80000);
    s1.setBonus(5000);

    s1.display();

    return 0;
}
