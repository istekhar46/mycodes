#include <iostream>
using namespace std;
class base
{
public:
  int varBase = 1000;
  virtual void getdata()
  {
    cout << "the value of varBase is " << varBase << endl;
  }
};
class derived : public base
{
public:
  int varDerived = 70;

  void getdata()
  {
    cout << "the value of varbase is " << varBase << endl;
    cout << "the value of varDerives is " << varDerived << endl;
  }
};
int main()
{
  
  base *basepointer;
  base obj1;
  // basepointer->varBase=46;
  // basepointer->getdata();
  derived obj2;
  basepointer = &obj2;
  // basepointer->varDerived=56;
  basepointer->getdata();

  return 0;
}