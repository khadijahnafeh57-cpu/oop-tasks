#include <iostream>
using namespace std;

class Travel
{
private:
    int kilometer;
    int hour;

public:
    void input()
    {
        cout << "Enter kilometer: ";
        cin >> kilometer;

        cout << "Enter hour: ";
        cin >> hour;
    }

    void show()
    {
        cout << "Kilometer: " << kilometer << endl;
        cout << "Hour: " << hour << endl;
    }

    void add(Travel p)
    {
        int totalKm = kilometer + p.kilometer;
        int totalHour = hour + p.hour;

        cout << "\n--- After Addition ---\n";
        cout << "Total Kilometer: " << totalKm << endl;
        cout << "Total Hour: " << totalHour << endl;
    }
};

int main()
{
    Travel t1, t2;

    cout << "Enter data for Travel 1:\n";
    t1.input();

    cout << "\nEnter data for Travel 2:\n";
    t2.input();

    cout << "\n--- Travel 1 Data ---\n";
    t1.show();

    cout << "\n--- Travel 2 Data ---\n";
    t2.show();

    // calling add function (t1 object calling, t2 passed as argument)
    t1.add(t2);

    return 0;
}
