#include<iostream>
#include<string>
using namespace std;
class employee{
    int id;
    string name;
    double salary;
    public:
    employee(){
        cout<<"Enter the Employee Id :"<<endl;
        cin>>id;
        cout<<"Enter the Employee Name :"<<endl;
        cin>>name;
        cout<<"Enter the Employee salary :"<<endl;
        cin>>salary;
    }
    void display()
{
    cout<<"Employee id is "<<id<<endl;
    cout<<"Employee name is "<<name<<endl;
    cout<<"Employee salary is "<<salary<<endl;
}
    ~employee(){
        cout<<"Destructor Executed"<<endl;
    }
};
int main()
{
    employee e;
    e.display();
    return 0;
}