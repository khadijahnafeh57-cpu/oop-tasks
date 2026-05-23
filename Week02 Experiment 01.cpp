#include <iostream>
using namespace std;

struct Student
{
    char name[50];
    int rollNo;
    int marks1;
    int marks2;
    int marks3;
};

int main()
{
    Student s;
    int total;

    cout << "Enter student name: ";
    cin >> s.name;

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter marks of subject 1: ";
    cin >> s.marks1;

    cout << "Enter marks of subject 2: ";
    cin >> s.marks2;

    cout << "Enter marks of subject 3: ";
    cin >> s.marks3;

    total = s.marks1 + s.marks2 + s.marks3;

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks 1: " << s.marks1 << endl;
    cout << "Marks 2: " << s.marks2 << endl;
    cout << "Marks 3: " << s.marks3 << endl;
    cout << "Total Marks: " << total << endl;

    return 0;
}
