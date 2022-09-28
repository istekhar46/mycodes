#include <iostream>
using namespace std;

class student
{
private:
    int a;
    string s;

public:
    string t;
    int c;
    int d;
    void setData(int a, string s);
    void getData()
    {
        cout << "the fees of student is " << a << endl;
        cout << "the students fathers name is " << t << endl;
        cout << "the instutte of student is " << s << endl;
        cout << "the roll no of  student is " << c << endl;
        cout << "the age of  student is " << d << endl;
    }
};

void student::setData(int fees, string institute)
{
    a = fees;
    s = institute;
}
int main()
{
    student hamza;
    hamza.c = 35;
    hamza.d = 17;
    hamza.t = "(istiyak)";

    hamza.setData(50000, "(ALLEN)");
    hamza.getData();

    return 0;
}