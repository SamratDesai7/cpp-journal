#include <iostream>
using namespace std;
class Counter {
private:
    static int count;
public:
    Counter() {
        count++;
    }
    static void printNumbers() {
        for (int i = 1; i <= 10; ++i) {
            cout << i << " ";
        }
        cout << endl;
    }
    static int getCount() {
        return count;
    }
};
// Initializing static data member
int Counter::count = 0;
int main() {
    // Creating objects of Counter
    Counter obj1;
    Counter obj2;
    Counter obj3;
    // Displaying the count of objects created
    cout << "Number of objects created: " << Counter::getCount() << endl;
    // Printing numbers 1 to 10
    cout << "Numbers from 1 to 10: ";
    Counter::printNumbers();
    return 0;
}
