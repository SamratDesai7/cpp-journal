#include<iostream>
using namespace std;
class addition{
	private:
    int a, b;
    public :
    void add(){
        cout<<"Enter first number :"<<endl;
        cin>>a;
        cout<<"Enter second number :"<<endl;
        cin>>b;
    }
    void display(){
        cout<<a<<" + "<<b<<" = "<<a+b;
    }
};
int main()
{
    addition  a;
    a.add();
    a.display(); 
    return 0;
}