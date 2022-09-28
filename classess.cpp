#include <iostream>
using namespace std;
class shop
{
private:
    int itemid[50];
    int itemprice[50];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void Displayprice(void);
};
void shop::setPrice(void)
{
    cout << "Enter the item id " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the price of item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::Displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item  " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.Displayprice();
    return 0;
}