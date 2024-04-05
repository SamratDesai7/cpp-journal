#include <iostream>
using namespace std;
class Adder {
public:
    int num1;
public:
    Adder(int n) : num1(n) {}
    // Declare friend function
    friend int add(const Adder& obj, int num2);
};
// Definition of friend function
int add(const Adder& obj, int num2) {
    return obj.num1 + num2;
}
int main() {
    Adder obj(10);
    int num2 = 20;
    // Adding num1 and num2 using friend function
    int result = add(obj, num2);
    cout <<obj.num1 << " + " << num2 << " = " << result << endl;
    return 0;
}
