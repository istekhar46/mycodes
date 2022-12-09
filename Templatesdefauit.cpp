#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>
class Temp
{
public:
    T1 data1;
    T2 data2;
    Temp(T1 x, T2 y)
    {
        data1 = x;
        data2 = y;
    }
    void Display()
    {
        cout << data1 << " " << data2 << endl;
    }
};

int main()
{
    Temp<> intro(46, 10.1);
    intro.Display();

    Temp<int, string> intr(46, "istekhar");
    intr.Display();
    return 0;
}