#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printpoint()
    {
        cout << "the point is (" << x << "," << y << ")" << endl;
    }
    friend void distance(point o1, point o2);
};
void distance(point o1, point o2)
{
    int diff = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    // int diff = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y-o1.y, 2));
    cout << "the diffrence between the points is " << diff << endl;
}
int main()
{
    point p(0,1);
    point q(0, 6);
    
    point r(1,1);
    point s(1,1);
    
    point x(1,0);
    point y(70,1);

    p.printpoint();
    q.printpoint();
    distance(p, q);

    r.printpoint();
    s.printpoint();
    distance(r,s);

    x.printpoint();
    y.printpoint();
    distance(x,y);
    return 0;
}