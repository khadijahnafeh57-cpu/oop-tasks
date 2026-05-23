#include <iostream>
using namespace std;

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default constructor
    Inventory()
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }

    // Parameterized constructor
    Inventory(int item, int qty, double c)
    {
        setItemNumber(item);
        setQuantity(qty);
        setCost(c);
        setTotalCost();
    }

    // Setters with validation
    void setItemNumber(int item)
    {
        while (item < 0)
        {
            cout << "Invalid item number. Enter again: ";
            cin >> item;
        }
        itemNumber = item;
    }

    void setQuantity(int qty)
    {
        while (qty < 0)
        {
            cout << "Invalid quantity. Enter again: ";
            cin >> qty;
        }
        quantity = qty;
    }

    void setCost(double c)
    {
        while (c < 0)
        {
            cout << "Invalid cost. Enter again: ";
            cin >> c;
        }
        cost = c;
    }

    void setTotalCost()
    {
        totalCost = quantity * cost;
    }

    // Getters
    int getItemNumber()
    {
        return itemNumber;
    }

    int getQuantity()
    {
        return quantity;
    }

    double getCost()
    {
        return cost;
    }

    double getTotalCost()
    {
        return totalCost;
    }
};

int main()
{
    Inventory item;
    int itemNo, qty;
    double cost;

    cout << "Enter item number: ";
    cin >> itemNo;

    cout << "Enter quantity: ";
    cin >> qty;

    cout << "Enter cost per item: ";
    cin >> cost;

    item.setItemNumber(itemNo);
    item.setQuantity(qty);
    item.setCost(cost);
    item.setTotalCost();

    cout << "\n--- Inventory Details ---\n";
    cout << "Item Number: " << item.getItemNumber() << endl;
    cout << "Quantity: " << item.getQuantity() << endl;
    cout << "Cost: " << item.getCost() << endl;
    cout << "Total Cost: " << item.getTotalCost() << endl;

    return 0;
}
