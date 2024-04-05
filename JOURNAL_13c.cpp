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
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
// Intermediate class inheriting from Person
class Department : public Person {
protected:
    string departmentName;
public:
    Department() {
        cout << "Enter department name: ";
        cin >> departmentName;
    }
    void displayDepartment() {
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
    void displayEmployee() {
        displayInfo(); // Accessing base class method
        displayDepartment(); // Accessing intermediate class method
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    // Creating object of derived class
    Employee emp;
    // Accessing member functions of derived class
    emp.displayEmployee();
    return 0;
}
