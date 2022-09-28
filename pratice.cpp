#include <iostream>
#include <cmath>
using namespace std;
class scal
{
    int a, b;

public:
    // void setdata(int v1, int v2)
    // {
    //     a = v1;
    //     b = v2;
    // }
    // void display(void)
    // {
    //     cout << "the result " << a << " + " << b << endl;
    // }
    int add(int a1, int b1)
    {
        a = a1;
        b = b1;
        int c = a + b;
        cout << "the results of addition is " << c << endl;
        return c;
    }
    int sub(int a1, int b1)
    {
        a = a1;
        b = b1;
        int c = a - b;
        cout << "the results of substraction is " << c << endl;
        return c;
    }
    int mul(int a1, int b1)
    {
        a = a1;
        b = b1;
        int c = a * b;
        cout << "the results of multiplication is " << c << endl;
        return c;
    }
    int division(int a1, int b1)
    {
        a = a1;
        b = b1;
        int c = a / b;
        cout << "the results of division is " << c << endl;
        return c;
    }
};

class scical:public scal{
    int a,b;
    public:
    int sqaroot ( int x ){
           a=x;
        int c= sqrt(x);
        cout<<"the squroot of number is "<<c<<endl;
        return c;
    }
    
    int power (int x ,int y){
          a=x;
          b=y;
        int c=pow(a,b);
        cout<<"the power of number is "<<c<<endl;
        return c;
    }

};
int main()
{
    scal m1;
 
    int c,d,e,f;
 
    cout << "Enter 1 for addition \nEnter 2 for substraction\nEnter 3 for multiplicatiion\nEnter 4 for division\nEnter 5 for skip" << endl;
    cin >> e;
    if (e == 1)
    {
        cout << "Enter the values 1" << endl;
        cin >> c;
        cout << "Enter the values 2" << endl;
        cin >> d;
        m1.add(c, d);
    }
    else if (e == 2)
    {
        cout << "Enter the values 1" << endl;
        cin >> c;
        cout << "Enter the values 2" << endl;
        cin >> d;
        m1.sub(c, d);
    }
    else if (e == 3)
    {
        cout << "Enter the values 1" << endl;
        cin >> c;
        cout << "Enter the values 2" << endl;
        cin >> d;
        m1.mul(c, d);
    }
    else if (e == 4)
    {
        cout << "Enter the values 1" << endl;
        cin >> c;
        cout << "Enter the values 2" << endl;
        cin >> d;
        m1.division(c, d);
    }
    else if (e==5){
        cout<<"<<<<the Simple calculator is skipped>>>>"<<endl;
    }
    else
    {
        cout << "Enter a valid number" << endl;
    }
   scical m2;
  cout<<"\nEnter 1 for squaroot \nEnter 2 for power of number"<<endl;
  cin>>f;
  if (f==1){
    cout<<"Enter the number "<<endl;
    cin>>c;
   m2.sqaroot(c);
  }
  else if(f==2){
    cout<<"Enter the number "<<endl;
    cin>>c;
    cout<<"Enter the power of number "<<endl;
    cin>>d;
    m2.power(c,d);
  }


    return 0;
}