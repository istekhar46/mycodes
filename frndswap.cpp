#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;

    friend void swap(c1 &, c2 &);

public:
    void setvalue(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << "the value of c1 after swap is " << val1 << endl;
    }

    void display1(void)
    {
        cout << val1;
    }
};

class c2
{
    friend void swap(c1 &, c2 &);
    int val2;

public:
    void setvalue(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << "the value of c2 after swap is " << val2 << endl;
    }
    void display1(void)
    {
        cout << val2;
    }
};
void swap(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 a1;
    a1.setvalue(55);
    cout << "the set value of c1 is ";
    a1.display1();
    cout << endl;
    c2 b2;
    b2.setvalue(45);
    cout << "the set value of c2 is ";
    b2.display1();
    cout << endl;

    swap(a1, b2);

    a1.display();

    b2.display();

    return 0;
}