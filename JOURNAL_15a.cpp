#include <iostream>
using namespace std;
// Base class
class Shape {
public:
    // Virtual function to calculate area
    virtual double area() {
        cout << "Area of Shape" << endl;
        return 0;
    }
};
// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    // Override base class virtual function
    double area() override {
        return 3.14 * radius * radius;
    }
};
// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    // Override base class virtual function
    double area() override {
        return length * width;
    }
};
int main() {
    // Pointer to base class
    Shape* shape;
    // Creating objects of derived classes
    Circle circle(5);
    Rectangle rectangle(4, 6);
    // Pointing to objects and calling area function
    shape = &circle;
    cout << "Area of Circle: " << shape->area() << endl;
    shape = &rectangle;
    cout << "Area of Rectangle: " << shape->area() << endl;
    return 0;
}
