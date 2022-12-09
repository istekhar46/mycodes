#include<iostream>
#include<stdio.h>
using namespace std;

struct  Rectangle{
    // char name[20];
    int length;
    int bredth;

};

int main(){
    int aaa=100;
    int *ptr=&aaa;
    cout<<*(ptr)<<endl;
        Rectangle  r={2,5};
    // r.name=("istekhar");
    // cout<<r.name<<endl;
    cout<<r.length<<endl;
    cout<<r.bredth<<endl;

  
  

 int a;
 cout<<"enter size "<<endl;
 cin>>a;

    int arrr[a]={10,20,30,40};

    int *q=arrr;
    cout<<q<<endl;
    for(int i=0;i<4;i++){
        cout<<q[i]<<" ";
    }
  cout<<endl;
    printf("%d",arrr[4]);

    
    
    return 0;
}