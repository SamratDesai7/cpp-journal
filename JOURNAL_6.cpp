#include<iostream>
using namespace std;
int cube(int a){
    return a*a*a;
}
int main()
{
    int b,c;
    cout<<"Enter Value for the cube:"<<endl;
    cin>>b;
    c = cube(b);
    cout<<"The cube of "<<b<<" is "<<c<<endl;
    return 0;
}