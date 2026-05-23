#include <iostream>
using namespace std;

struct Student
{
    int studentID;
    char studentName[50];
    char courseCode[20];
    char courseName[50];
    int courseMarks;
};

int main()
{
    Student s = {101, "Ali", "CS101", "Programming", 85};

    cout << "Student ID: " << s.studentID << endl;
    cout << "Student Name: " << s.studentName << endl;
    cout << "Course Code: " << s.courseCode << endl;
    cout << "Course Name: " << s.courseName << endl;
    cout << "Course Marks: " << s.courseMarks << endl;

    return 0;
}
