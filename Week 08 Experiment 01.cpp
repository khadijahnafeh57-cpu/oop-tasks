#include <iostream>
using namespace std;

// Base class
class Publication
{
protected:
    string title;
    float price;

public:
    void getdata()
    {
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter price: ";
        cin >> price;
    }

    void putdata()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

// Derived class Book
class Book : public Publication
{
private:
    int pageCount;

public:
    void getdata()
    {
        Publication::getdata();

        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putdata()
    {
        Publication::putdata();

        cout << "Page Count: " << pageCount << endl;
    }
};

// Derived class Tape
class Tape : public Publication
{
private:
    float playTime;

public:
    void getdata()
    {
        Publication::getdata();

        cout << "Enter playing time (minutes): ";
        cin >> playTime;
    }

    void putdata()
    {
        Publication::putdata();

        cout << "Playing Time: " << playTime << " minutes" << endl;
    }
};

int main()
{
    Book b;
    Tape t;

    cout << "\n--- Enter Book Data ---\n";
    b.getdata();

    cout << "\n--- Enter Tape Data ---\n";
    t.getdata();

    cout << "\n--- Book Details ---\n";
    b.putdata();

    cout << "\n--- Tape Details ---\n";
    t.putdata();

    return 0;
}
