#include<iostream>
using namespace std;
class bank{
    int ac_no;
    string name;
    double balance;
    public :
    void input();
    void display();
};
    void bank :: input()
    {
        cout<<"Enter Account Number :"<<endl;
        cin>>ac_no;
        cout<<"Enter Account Holder Name :"<<endl;
        cin>>name;
        cout<<"Enter Account Balance :"<<endl;
        cin>>balance;
    }
    void bank :: display()
    {
        cout<<"----====Account Details====----"<<endl;
        cout<<"Account Number is :"<<ac_no<<endl;
        cout<<"Account Holder Name is :"<<name<<endl;
        cout<<"Account Balance is :"<<balance<<endl;
    }
int main()
{
    bank b1;
    b1.input();
    b1.display();
    return 0;
}