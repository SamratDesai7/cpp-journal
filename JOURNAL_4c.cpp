#include<iostream>
using namespace std;
class Addition {
public:
    int a, b;
    void add(){
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    void display(){
        cout << a << " + " << b << " = " << a + b;
    }
};
int main() {
    Addition a;
    a.add();
    a.display(); 
    return 0;
}
