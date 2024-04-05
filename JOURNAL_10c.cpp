#include <iostream>
using namespace std;
class Adder {
public:
    int num1;
public:
    // Parameterized constructor
    Adder(int n) : num1(n) {}
    // Copy constructor
    Adder(const Adder& other) : num1(other.num1) {}
    // Declare friend function
    friend int add(const Adder& obj, int num2);
};
// Definition of friend function
int add(const Adder& obj, int num2) {
    return obj.num1 + num2;
}
int main() {
    // Creating an Adder object using parameterized constructor
    Adder obj1(10);
    // Creating another Adder object using copy constructor
    Adder obj2(obj1);
    // Adding num1 and num2 using friend function
    int num2 = 20;
    int result = add(obj2, num2);
    cout << "Result of adding " << obj2.num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}
