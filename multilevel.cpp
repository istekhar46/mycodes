#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student::set_roll_number(int r){
    roll_number=r;
}
void student::get_roll_number(void){
   cout<<"\nthe Roll no is "<<roll_number<<endl;
}
class Exam : public student{
    protected:
   float maths;
   float physics;
   public:
 void set_marks(float,float);
 void get_marks(void);
};
void Exam :: set_marks(float m1, float m2){

      maths=m1;
      physics=m2;
}
void Exam :: get_marks(void){

     cout<<"\nthe marks in maths and physics is "<<maths<<" and "<<physics<<endl;
     }
class results : public Exam{
  float percentage;
public:
void display_percentage(void){
    
    cout<<"\nthe percentage of marks is "<<(maths+physics)/2<<endl<<"\n";
}

};

int main(){
    results w1;
    w1.set_roll_number(420);
    w1.set_marks(90.5,95.4);
    w1.get_roll_number();
    w1.get_marks();
    w1.display_percentage();

    
    return 0;
}