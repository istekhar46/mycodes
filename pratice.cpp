#include <iostream>
#include <cmath>
using namespace std;
class scal
{
    int a, b;

public:

    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
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
 

class scical{
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
     double c=pow(a,b);
        cout<<"the power of number is "<<c<<endl;
        return c;
    }

    int trignometry(int k, int j){
        a=k;
        b=j;
        cout<<"the value of sin(a) and sin(b) is "<<sin(a)<<" , "<<sin(b)<<"\n"
            <<"the value of cos(a) and cos(b) is "<<cos(a)<<" , "<<cos(b)<<"\n"
            <<"the value of tan(a) and tan(b) is "<<tan(a)<<" , "<<tan(b)<<endl;
    }


    

};
    class hybridcal:public scal, public scical{};



int main()
{
    hybridcal m1;
 
    int c,d,e,f;
 
    cout << "Enter 1 for addition \nEnter 2 for substraction\nEnter 3 for multiplicatiion\nEnter 4 for division\nEnter 5 for scientific calculation" << endl;
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
        cout<<"<<<< Now you are in scientific calculator >>>>"<<endl;
    }
    else
    {
        cout << "Enter a valid number" << endl;
    }
  cout<<" now you are in scientific calculator "<<endl;

    // double sum=0;
    // int number,i;
    
  cout<<"\nEnter 1 for squaroot \nEnter 2 for power of number \nEnter 3 for trignomerric values "<<endl;
  cin>>f;
  if (f==1){
    cout<<"Enter the number "<<endl;
    cin>>c;
   m1.sqaroot(c);
  }
  else if(f==2){
    cout<<"Enter the number "<<endl;
    cin>>c;
    cout<<"Enter the power of number "<<endl;
    cin>>d;
    m1.power(c,d);
  }

else if (f==3){
     cout<<"Enter the value of (a)"<<endl;
    cin>>c;
    cout<<"Enter the value of (b) "<<endl;
    cin>>d;
    m1.trignometry(c,d);
}
  
//     cout<<"Enter the first five numbers  to add"<<endl;
//    for (i=0;i<5;i++){
//     cout<<"Enter the  number "<<i+1<<endl;
//     cin>>number;
//     sum+=number;
//    }
 
//        cout<<"the addition of your numbers is "<<sum<<endl;



    return 0;
}