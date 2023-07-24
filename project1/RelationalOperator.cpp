#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num1 {}, num2 {};

    cout << std::boolalpha; // displays true or false
    cout << "Enter 2 integers separated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;

    cout << endl;

    const int lower {10};
    const int upper {20};

    cout << "Enter an integer that is greater than " << lower << ": ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

    cout << "Enter an integer that is less than or equal to " << upper << ": ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;

    cout << endl;

    return 0;
}