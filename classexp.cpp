#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
};
class MyClass
{ // The class
private:
    int a;
    string s;

public:              // Access specifier
    int myNum;       // Attribute (int variable)
    string mynum;
    string myString; // Attribute (string variable)
    void studentfees(int a);
    void myname(string s);
};
void MyClass::myname(string s = "istekhar")
{
    cout<<"name of student is " << s << endl;
}

void MyClass::studentfees(int a = 5000)
{

    // cout << "enter the fees  " << endl;
    // cin >> a;
    cout << "the fees is " << a << endl;
}
int main()
{
    MyClass myObj; // Create an object of MyClass

    // Access attributes and set values
    myObj.myname();
    
    myObj.myNum = 50;
    myObj.myString = "name of institude is ABESIT";
    myObj.studentfees();
    myObj.mynum="marks obtain total in 55 is ";
    cout<<myObj.mynum;
    cout << myObj.myNum << "\n";
    cout << myObj.myString<<endl;
    




  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
