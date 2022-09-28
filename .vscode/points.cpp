#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x;
    int y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printres()
    {
        cout << "the points is (" << x << "," << y << ")" << endl;
    }
    friend void discal(point , point );
};
void discal(point o1, point o2)
{

    // int diff_x = (o2.x - o1.x);
    int diff_y = (o2.y - o1.y);
    int diff = sqrt(pow(o2.x - o1.x, 2) + pow(diff_y, 2));
    
    cout << "the distance between x y is " << diff << endl;
}

int main()
{
    point p(1,2 );
    point q(4, 6);
    p.printres();
    q.printres();
    discal(p, q);

    return 0;
}