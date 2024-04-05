#include<iostream>
using namespace std;
class Employee {
private:
    int id;
    string name;
    double salary;
public:
    Employee() {
        cout << "Enter the Employee Id: ";
        cin >> id;
        cout << "Enter the Employee Name: ";
        cin >> name;
        cout << "Enter the Employee salary: ";
        cin >> salary;
    }
    void display() {
        cout << "Employee id is " << id << endl;
        cout << "Employee name is " << name << endl;
        cout << "Employee salary is " << salary << endl;
    }
    ~Employee() {
        cout << "Destructor Executed" << endl;
    }
};
int main() {
    Employee *e = new Employee();
    e->display();
    delete e;
    return 0;
}
