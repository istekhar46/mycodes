#include<iostream>
using namespace std;
template <class T>
class vector
{
    public:
    T *arr;
        int size;
     vector (int m)
    {
        size=m;
        arr=new T [size];
    }
    
    T Dotproduct (vector &v)
    {
        T d=0;
        for (int i = 0; i < size; i++)
        {
           d+= this->arr[i]* v.arr[i];
           
        }
        return d;
    }

};
template <class T1,class T2>
class s1
{
    public:
    T1 data1 ;
    T2 data2;
      
    s1(T1 a, T2 b){
        data1 = a;
        data2=b;
    }

    void Display(){
        cout<<this->data1<<this->data2<<endl;
    }
    void Display1(){
        cout<<this->data1<<"=>"<<this->data2<<".....100 soon"<<endl;
    }


};



int main(){
  s1 <string,int> obj1("istekhar_khan",46);
  obj1.Display();

  s1 <string , float> obj2("success",99.9);
  obj2.Display1();





    vector <int>v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;
    
    vector<int> v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;

    int a= v1.Dotproduct(v2);
    cout<<a<<endl;

    for(int i=0; i<v1.size;i++){
    cout<<v1.arr[i]<<" "<<endl;
    }

    vector <float>v3(3);
    v3.arr[0]=4.3;
    v3.arr[1]=3.3;
    v3.arr[2]=1.3;
    
    vector<float> v4(3);
    v4.arr[0]=1.3;
    v4.arr[1]=0.3;
    v4.arr[2]=1.3;

    float b= v3.Dotproduct(v4);
    cout<<b<<endl;
    return 0;
}