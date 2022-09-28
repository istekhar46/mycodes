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
    point p(1, 2);
    point q(0, 6);
    p.printpoint();
    q.printpoint();
    distance(p, q);

    return 0;
}