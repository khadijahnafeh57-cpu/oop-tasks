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
    // declaring and initializing structure object
    Student s1 = {101, "Ali", "CS101", "Programming", 85};

    // displaying data
    cout << "Student ID: " << s1.studentID << endl;
    cout << "Student Name: " << s1.studentName << endl;
    cout << "Course Code: " << s1.courseCode << endl;
    cout << "Course Name: " << s1.courseName << endl;
    cout << "Course Marks: " << s1.courseMarks << endl;

    return 0;
}
