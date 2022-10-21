#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int a) : data1(a)
    {

        cout << "constructor base 1 is called " << endl;
    }
    void printdata1()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int a)
    {
        data2 = a;

        cout << "constructor base 2 is called " << endl;
    }
    void printdata2()
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int a;
    int b;

public:
    derived(int k, int l, int c, int d) : base1(c), base2(d)
    {
        a = k;
        b = l;
        cout << "the derived constructor is called " << endl;
    }
    void printdata3()
    {
        cout << "the value of derived a and b  is " << a << " , " << b << endl;
    }
};

int main()
{
    derived m1(3, 4, 5, 6);
    m1.printdata3();
    m1.printdata1();
    m1.printdata2();

    return 0;
}