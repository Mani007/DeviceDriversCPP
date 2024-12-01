#include <iostream>
using namespace std;
class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setItem(void);
    void displayPrice(void);
};

void Shop::setItem(void)
{
    cout << "Enter the item ID: ";
    cin >> itemId[counter];
    cout << "Enter the item price: ";
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setItem();
    dukaan.setItem();
    dukaan.setItem();
    dukaan.displayPrice();

    return 0;
}
