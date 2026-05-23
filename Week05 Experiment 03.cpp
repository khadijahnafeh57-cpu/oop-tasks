#include <iostream>
using namespace std;

class Capital
{
private:
    static int count;

public:
    Capital()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Total objects created: " << count << endl;
    }
};

// initialize static data member
int Capital::count = 0;

int main()
{
    Capital c1;
    Capital c2;
    Capital c3;

    Capital::showCount();

    return 0;
}#include <iostream>
using namespace std;

class Capital
{
private:
    static int count;

public:
    Capital()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Total objects created: " << count << endl;
    }
};

// initialize static data member
int Capital::count = 0;

int main()
{
    Capital c1;
    Capital c2;
    Capital c3;

    Capital::showCount();

    return 0;
}#include <iostream>
using namespace std;

class Capital
{
private:
    static int count;

public:
    Capital()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Total objects created: " << count << endl;
    }
};

// initialize static data member
int Capital::count = 0;

int main()
{
    Capital c1;
    Capital c2;
    Capital c3;

    Capital::showCount();

    return 0;
}
