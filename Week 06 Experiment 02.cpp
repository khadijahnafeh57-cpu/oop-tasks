#include <iostream>
using namespace std;

class Room
{
private:
    double width;

public:
    void setWidth(double w)
    {
        width = w;
    }

    // friend function declaration
    friend void printWidth(Room r);
};

// friend function definition (outside class)
void printWidth(Room r)
{
    cout << "Width of room is: " << r.width << endl;
}

int main()
{
    Room r;

    r.setWidth(10.10);

    printWidth(r);

    return 0;
}
