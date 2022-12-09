#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

struct  student 
{  
    string name;
    int salary ;
    string institute;
    

};


int main(){
    student istekhar ;
    istekhar.name = "istekhar khan";
    istekhar.salary=500;
    istekhar.institute="ABESIT";
    cout<<"The name of the is "<<istekhar.name<<endl;
    cout<<"The salary of the is "<<istekhar.salary<<endl;
    cout<<"The name of the institute is "<<istekhar.institute<<endl;

    int a=25;
   cout<< sqrt(a)<<endl;
   cout<<pow(2,8);
    



    return 0;
}