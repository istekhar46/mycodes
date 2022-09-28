#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    

    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex()
    {
        a = 0;
        b = 0;
    }

    void printnum()
    {
        cout << "the complex number is " << a << " + " << b << "i" << endl;
    }
    
    friend void add(complex o1, complex o2);
};
void add(complex o1, complex o2)
{
    int sum = (o1.a + o2.a);
    cout << "the sum of complex numbers is " << sum << endl;
}

int main()
{


    complex c1(1, 2);
    c1.printnum();

    complex c2(3);
    c2.printnum();
    add(c1,c2);

    complex c4(6);
    c4.printnum();
    add(c2, c4);

    complex c3;
    c3.printnum();
    // add(c3, c2);
    return 0;
}