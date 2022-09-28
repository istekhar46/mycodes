#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    int data1;

public:
    void setdata(int v1)
    {
        data = v1;
    }
    void getdata(void)
    {

        cout << "the sum of class X obj is " << data << endl;
    }
    friend int setValue(X o1, Y o2);
    friend X add(X o1, X o2);
};

class Y
{
    int num;

public:
    void setnum(int v2)
    {
        num = v2;
    }
    friend int setValue(X o1, Y o2);
};

int setValue(X o1, Y o2)
{
    int z = o1.data + o2.num;
    cout << "the sum of objects is " << z << endl;
}

X add(X o2, X o3)
{
    X k;
    k.setdata(o2.data + o3.data);
    return k;
}

int main()
{
    X a1, c1, sum;
    a1.setdata(2);
    c1.setdata(4);
    sum = add(a1, c1);
        // sum.getdata();

    Y b1;
    b1.setnum(3);

    setValue(sum, b1);

    return 0;
}