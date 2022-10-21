#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *ptr=&a;
    * ptr=1000;
    int* p= new int(20);
    float *q= new float(50.50);

    cout<<" the value of a is "<<a<<endl;
    cout<<" the value of a using pointer is "<<*(ptr)<<endl;
    cout<<" the address of is "<<&a<<endl;
    cout<<" the value at address p is "<<*(p)<<endl;
    cout<<" the value at address q is "<<(*q)<<endl;

    int * arr = new int [4];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    // delete[] arr;
    
    cout<<"the elements of array is "<<arr[0]<<endl;
    cout<<"the elements of array is "<<arr[1]<<endl;
    cout<<"the elements of array is "<<arr[2]<<endl;
    cout<<"the elements of array is "<<arr[3]<<endl;

    int array[]={10,20,30,40,50,60,70};
    for(int i=0;i<7;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}