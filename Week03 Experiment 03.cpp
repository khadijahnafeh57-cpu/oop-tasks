#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Mutator functions (setters)
    void setName(string n)
    {
        name = n;
    }

    void setID(int id)
    {
        idNumber = id;
    }

    void setDepartment(string d)
    {
        department = d;
    }

    void setPosition(string p)
    {
        position = p;
    }

    // Accessor functions (getters)
    string getName()
    {
        return name;
    }

    int getID()
    {
        return idNumber;
    }

    string getDepartment()
    {
        return department;
    }

    string getPosition()
    {
        return position;
    }
};

int main()
{
    Employee e1, e2, e3;

    // Employee 1
    e1.setName("Ali");
    e1.setID(101);
    e1.setDepartment("HR");
    e1.setPosition("Manager");

    // Employee 2
    e2.setName("Sara");
    e2.setID(102);
    e2.setDepartment("IT");
    e2.setPosition("Developer");

    // Employee 3
    e3.setName("Ahmed");
    e3.setID(103);
    e3.setDepartment("Finance");
    e3.setPosition("Analyst");

    // Display data
    cout << "Employee 1:\n";
    cout << "Name: " << e1.getName() << endl;
    cout << "ID: " << e1.getID() << endl;
    cout << "Department: " << e1.getDepartment() << endl;
    cout << "Position: " << e1.getPosition() << endl;
    cout << "------------------------\n";

    cout << "Employee 2:\n";
    cout << "Name: " << e2.getName() << endl;
    cout << "ID: " << e2.getID() << endl;
    cout << "Department: " << e2.getDepartment() << endl;
    cout << "Position: " << e2.getPosition() << endl;
    cout << "------------------------\n";

    cout << "Employee 3:\n";
    cout << "Name: " << e3.getName() << endl;
    cout << "ID: " << e3.getID() << endl;
    cout << "Department: " << e3.getDepartment() << endl;
    cout << "Position: " << e3.getPosition() << endl;

    return 0;
}
