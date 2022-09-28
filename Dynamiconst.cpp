#include <iostream>
using namespace std;

class bankdeposite
{
    int principal;
    int years;
    float intrestrate;
    float returnvalue;

public:
    bankdeposite() {}
    bankdeposite(int p, int y, float r);
    bankdeposite(int p, int y, int r);
    void show();
};

bankdeposite ::bankdeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    } 
}
bankdeposite ::bankdeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intrestrate);
    }
}
void bankdeposite ::show()
{
    cout << "the return value of the principal money is " << returnvalue << endl;
}
int main()
{
    int p,y;
    
    int R;
    float r;
    bankdeposite bd1,bd3;

    cout << "inter the principal money, years, interestrate " << endl;
    cin >> p >> y >> r;
    // bankdeposite bd1, bd2, bd3;
    bd1 = bankdeposite(p, y, r);
    bd1.show();

    cout << "inter the principal money, years, interestrate " << endl;
    cin >> p >> y >> R;
    bankdeposite  bd2 = bankdeposite(p, y, R);
    bd2.show();

    cout << "\n its just begning \n" << endl;
    cout << "\n just keep going ..... \n" << endl;
    return 0;
}