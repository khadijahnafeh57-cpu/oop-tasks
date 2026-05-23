#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    void setFeet(int f)
    {
        feet = f;
    }

    void setInches(float i)
    {
        inches = i;
    }

    void showDistance()
    {
        cout << "Distance = " << feet << " feet and " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d;
    int f;
    float i;

    cout << "Enter feet: ";
    cin >> f;

    cout << "Enter inches: ";
    cin >> i;

    d.setFeet(f);
    d.setInches(i);

    d.showDistance();

    return 0;
}
