#include <iostream>
using namespace std;
class Base
{

    int data1;

public:
    int data2;
    void setdata(void)
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1(void)
    {
        return data1;
    }
    int getdata2(void)
    {
        return data2;
    }
};
class Derived : public Base
{
    int data3;
    int data4;

public:
    
    void process();
    void display();
};
void Derived::process()
{
    data3 = data2 * getdata1();
    data4 = data2 * data3;
}
void Derived::display()
{
    cout << "the value of data 1  " << getdata1() << endl;
    cout << "the value of data 2  " << data2 << endl;
    cout << "the value of data 3  " << data3 << endl;
    cout << "the value of data 3  " << data4 << endl;
}

int main()
{

    Derived d1;
    d1.setdata();
    d1.process();
    d1.display();
    return 0;
}