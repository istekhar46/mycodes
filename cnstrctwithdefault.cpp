#include <iostream>
using namespace std;
class complex
{
    int data1, data2, data3;

public:
    complex(int j = 7, int k = 5, int l = 6)
    {
        data1 = j;
        data2 = k;
        data3 = l;
    }
    void printnum1()
    {
        cout << "the value of data1 ,data2 and data3 is " << data1 << " , " << data2 << " and " << data3 << endl;
    }
};

int main()
{
    complex c1,c5;
    c1.printnum1();
    cout << endl;

    complex c2(1,2,3);
    c2.printnum1();
    cout << endl;

    complex c3(2,3);
    c3.printnum1();
    cout << endl;

    complex c4(4);
    c4.printnum1();
    cout << endl;
    return 0;
}