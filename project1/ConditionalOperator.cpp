#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num {};

    cout << "Enter an integer: ";
    cin >> num;

    // if (num % 2 == 0) {
    //     cout << num << " is even" << endl;
    // } else {
    //     cout << num << " is odd" << endl;
    // }

    // makes code a lot cleaner
    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

    cout << endl;

    int num1 {}, num2 {};

    cout << "Eneter two integers separated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2) {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << "Numbers are the same" << endl;
    }

    return 0;
}