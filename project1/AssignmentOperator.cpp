#include <iostream> 

using std::cout;
using std::endl;

int main() {
    // assignment operator
    int num1 (10); // initialization
    int num2 (20); // initialization

    num1 = 100; // assignment statment

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;

    num1 = num2 = 1000; // not good practice!

    cout << "updated:" << endl;
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    return 0;
}