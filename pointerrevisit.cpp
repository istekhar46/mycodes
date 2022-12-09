#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "the id of item is " << id << endl;
        cout << "the price of id is " << price << endl;
    }
};
int main()
{
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptrTemp = ptr;
    int i, p;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item number "<<i+1<< endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        *ptr++;
    }
    for (i = 0; i < size; i++)
    {
        // cout<<"-->>the id and price of the item is "<<i+1<<endl;
        ptrTemp->getdata();
        *ptrTemp++;
    }

    return 0;
}