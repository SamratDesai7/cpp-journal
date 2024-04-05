#include<iostream>
using namespace std;
// Base class
class Person {
protected:
    string name;
    int age;
public:
    Person() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    virtual void displayInfo() { // Virtual function
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
// Derived class inheriting from Person
class Department : public Person {
protected:
    string departmentName;
public:
    Department() {
        cout << "Enter department name: ";
        cin >> departmentName;
    }
    void displayInfo() override { // Overridden virtual function
        Person::displayInfo(); // Call base class function
        cout << "Department: " << departmentName << endl;
    }
};
// Derived class inheriting from Department
class Employee : public Department {
private:
    int employeeId;
    double salary;
public:
    Employee() {
        cout << "Enter employee ID: ";
        cin >> employeeId;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayInfo() override { // Overridden virtual function
        Department::displayInfo(); // Call intermediate class function
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    // Creating pointer to base class
    Person* p;
    // Creating objects of derived classes
    Department dep;
    Employee emp;
    // Polymorphic behavior
    p = &dep;
    p->displayInfo();
    p = &emp;
    p->displayInfo();
    return 0;
}
