#include <iostream>
using namespace std;

template <class T1, class T2>
float function(T1 x, T2 y)
{
    float avg = (x + y) / 2.0;
    return avg;
}
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    swapp(x = 1.5, y = 5);
    cout << x << endl
         << y << "\n";
    int p;
    int q;
    cout << " Enter two numbers " << endl;
    cin >> p >> q;

    float b;
    b = function(p, q);
    cout << b;

    return 0;
}