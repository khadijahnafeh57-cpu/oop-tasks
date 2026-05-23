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

    // Setters
    void setName(string n) { name = n; }
    void setEmpNumber(int e) { empNumber = e; }
    void setHireDate(string h) { hireDate = h; }

    // Getters
    string getName() { return name; }
    int getEmpNumber() { return empNumber; }
    string getHireDate() { return hireDate; }
};

// Derived class
class ProductionWorker : public Employee
{
private:
    int shift;        // 1 = day, 2 = night
    double payRate;

public:
    ProductionWorker()
    {
        shift = 1;
        payRate = 0.0;
    }

    ProductionWorker(string n, int e, string h, int s, double p)
        : Employee(n, e, h)
    {
        shift = s;
        payRate = p;
    }

    // Setters
    void setShift(int s) { shift = s; }
    void setPayRate(double p) { payRate = p; }

    // Getters
    int getShift() { return shift; }
    double getPayRate() { return payRate; }

    void display()
    {
        cout << "\n--- Employee Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << empNumber << endl;
        cout << "Hire Date: " << hireDate << endl;

        cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
        cout << "Hourly Pay Rate: " << payRate << endl;
    }
};

int main()
{
    ProductionWorker p1;

    // input
    p1.setName("Ali");
    p1.setEmpNumber(101);
    p1.setHireDate("12-05-2024");
    p1.setShift(1);
    p1.setPayRate(25.5);

    p1.display();

    return 0;
}
