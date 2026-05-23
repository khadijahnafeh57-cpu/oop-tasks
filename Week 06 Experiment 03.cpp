#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string firstName;
    string lastName;
    string studentClass;
    float marks;
    char grade;

public:
    // Default constructor (default values)
    Student()
    {
        rollNo = 0;
        firstName = "";
        lastName = "";
        studentClass = "";
        marks = 0;
        grade = 'F';
    }

    // Parameterized constructor (overloaded)
    Student(int r, string f, string l, string c, float m, char g)
    {
        rollNo = r;
        firstName = f;
        lastName = l;
        studentClass = c;
        marks = m;
        grade = g;
    }

    // Friend function to access private data using address
    friend void DisplayClassData(Student *s);
};

// Function definition outside class
void DisplayClassData(Student *s)
{
    cout << "\n--- Student Data ---\n";
    cout << "Roll No: " << s->rollNo << endl;
    cout << "First Name: " << s->firstName << endl;
    cout << "Last Name: " << s->lastName << endl;
    cout << "Class: " << s->studentClass << endl;
    cout << "Marks: " << s->marks << endl;
    cout << "Grade: " << s->grade << endl;
}

int main()
{
    // using parameterized constructor
    Student s1(101, "Ali", "Khan", "BSCS", 85.5, 'A');

    // using default constructor
    Student s2;

    DisplayClassData(&s1);
    DisplayClassData(&s2);

    return 0;
}
