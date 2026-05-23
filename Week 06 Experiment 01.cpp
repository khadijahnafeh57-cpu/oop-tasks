#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    int realPart;
    int imaginaryPart;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> realPart;

        cout << "Enter imaginary part: ";
        cin >> imaginaryPart;
    }

    void show()
    {
        cout << realPart << " + " << imaginaryPart << "j" << endl;
    }

    ComplexNumber add(ComplexNumber c)
    {
        ComplexNumber temp;
        temp.realPart = realPart + c.realPart;
        temp.imaginaryPart = imaginaryPart + c.imaginaryPart;
        return temp;
    }

    ComplexNumber subtract(ComplexNumber c)
    {
        ComplexNumber temp;
        temp.realPart = realPart - c.realPart;
        temp.imaginaryPart = imaginaryPart - c.imaginaryPart;
        return temp;
    }

    ComplexNumber multiply(ComplexNumber c)
    {
        ComplexNumber temp;
        temp.realPart = (realPart * c.realPart) - (imaginaryPart * c.imaginaryPart);
        temp.imaginaryPart = (realPart * c.imaginaryPart) + (imaginaryPart * c.realPart);
        return temp;
    }
};

int main()
{
    ComplexNumber c1, c2, result;

    cout << "Enter Complex Number 1:\n";
    c1.input();

    cout << "\nEnter Complex Number 2:\n";
    c2.input();

    cout << "\n--- Complex Numbers ---\n";
    cout << "C1 = "; c1.show();
    cout << "C2 = "; c2.show();

    result = c1.add(c2);
    cout << "\nAddition: ";
    result.show();

    result = c1.subtract(c2);
    cout << "Subtraction: ";
    result.show();

    result = c1.multiply(c2);
    cout << "Multiplication: ";
    result.show();

    return 0;
}
