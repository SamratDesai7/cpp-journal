#include<iostream>
using namespace std;
int main()
{
    double per;
    cout<<"Enter the Persentage of Student :"<<endl;
    cin>>per;
    if (per>=75 && per< 100)
    {
        cout<<"You are in distinction"<<endl;
    }
    else if (per<75 && per >= 60)
    {
        cout<<"You are in First Class"<<endl;
    }
    else if (per<60 && per >= 50)
    {
        cout<<"You are in Second Class"<<endl;
    }
    else if (per<50 && per >= 35 && per >0)
    {
        cout<<"You are in Pass Class"<<endl;
    }
    else if (per<0 || per > 100)
    {
        cout<<"Enter right Persentage "<<endl;
    }
    else
    {
        cout<<"You are Fail "<<endl;
    }
    return 0;
}