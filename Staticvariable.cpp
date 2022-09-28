#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
private:
    int id;
    static int count;
    int salary;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;

        cout << "Enter the salary of employee" << endl;
        cin >> salary;
        count++;
    }
    void getData(void)
    {
        cout << "--->the id of employee is " << id << " and count is " << count << endl;
        cout << "--->the salary of Employee is " << salary << endl;
        if (count == 1)
        {
            cout << "name of employee is [Harry]" << endl;
        }
        else if (count == 2)
        {
            cout << "name of employee is [Rohan]" << endl;
        }
        else
        {
            cout << "name of employee is [Sohan]" << endl;
        }
    }

    void static getcount(void)
    {
        cout << "the value of count is <" << count << ">" << endl;
        cout << endl;
    }
};

 int Employee::count;

int main()
{

    Employee rohan, sohan, harry;
    harry.setData();
    harry.getData();
    // harry.getcount();----> this also works as Employee::getcount();
        Employee::getcount();

    rohan.setData();
    rohan.getData();
    Employee::getcount();

    sohan.setData();
    sohan.getData();
    Employee::getcount();

    Employee iki[4];

    for(int i=0;i<4;i++){
        iki[i].setData();
        iki[i].getData();
        cout<<endl;
    }
    return 0;
}