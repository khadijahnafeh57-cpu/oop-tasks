#include <iostream>
using namespace std;

class Complex
{
private:
    double rp; // real part
    double ip; // imaginary part

public:
    // Constructor
    Complex(double r = 0, double i = 0)
    {
        rp = r;
        ip = i;
    }

    // + operator overloading
    Complex operator+(const Complex &c)
    {
        return Complex(rp + c.rp, ip + c.ip);
    }

    // - operator overloading
    Complex operator-(const Complex &c)
    {
        return Complex(rp - c.rp, ip - c.ip);
    }

    // * operator overloading
    Complex operator*(const Complex &c)
    {
        return Complex((rp * c.rp) - (ip * c.ip),
                       (rp * c.ip) + (ip * c.rp));
    }

    // = operator overloading
    void operator=(const Complex &c)
    {
        rp = c.rp;
        ip = c.ip;
    }

    // print function
    void print()
    {
        cout << rp << " + " << ip << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 2), c2(1, 4), c3;

    cout << "C1 = ";
    c1.print();

    cout << "C2 = ";
    c2.print();

    c3 = c1 + c2;
    cout << "\nAddition: ";
    c3.print();

    c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.print();

    c3 = c1 * c2;
    cout << "Multiplication: ";
    c3.print();

    c3 = c1; // assignment operator
    cout << "Assignment: ";
    c3.print();

    return 0;
}
