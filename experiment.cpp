#include<iostream>
using namespace std;
class A {
  int a; 
  int b;
  public:
  void setdata(int x){
    a=x;
    
  }
  void printdata(void){
   cout<<"the numbers is a  is "<<a<<endl;
  }
  friend A add(A o1 , A o2);
};
A add(A o1 , A o2){

  A  c;
  c.setdata (o1.a+o2.a);
  return c ;
  // cout<<"the sum of numbers is "<<c<<endl;
  
}

int main(){
  A c1 , c2, sum;
  c1.setdata(1);
  c2.setdata(2);
  c1.printdata();
  c2.printdata();
  sum = add (c1,c2);
  sum.printdata();


  return 0;
}