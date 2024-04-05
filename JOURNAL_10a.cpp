#include <iostream>
using namespace std;
class Adder {
public:
    int num1;
public:
    // Default constructor
    Adder() : num1(0) {}
    // Parameterized constructor
    Adder(int n) : num1(n) {}
    // Declare friend function
    friend int add(const Adder& obj, int num2);
};
// Definition of friend function
int add(const Adder& obj, int num2) {
    return obj.num1 + num2;
}
int main() {
    // Creating an Adder object using default constructor
    Adder obj1;
    cout << "Value of num1 in obj1: " << obj1.num1 << endl;
    // Creating an Adder object using parameterized constructor
    Adder obj2(10);
    int num2 = 20;
    // Adding num1 and num2 using friend function
    int result = add(obj2, num2);
    cout << "Result of adding " << obj2.num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}
