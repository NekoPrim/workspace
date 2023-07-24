/*
Increment operator ++
Decrement operator --

increments and decrements is operand by 1
van be used with integers, floating point types and pointers

dont overuse this operator!
ALERT!!! Never use twice for the same variable in the same statement!!
*/
#include <iostream>

using std::cout;
using std::endl;

int main() {
    int counter {10};
    int result {0};

    // simple increment
    cout << "Counter: " << counter << endl; // 10

    counter = counter + 1;
    cout << "Counter: " << counter << endl; // 11

    counter ++;
    cout << "Counter: " << counter << endl; // 12

    ++ counter;
    cout << "Counter: " << counter << endl; // 13

    cout << endl;

    // pre-increment
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl; // 10

    // changes counter also
    // add 1 before assigning to result
    result = ++ counter;
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl; // 11

    cout << endl;

    // post-increment
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl; // 10

    // changes counter also
    // add 1 after assigning to result
    result = counter ++;
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl; // 10

    cout << endl;

    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl; // 10

    result = ++ counter + 10;
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl; // 21

    cout << endl;

    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl; // 10

    result = counter ++ + 10;
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl; // 20

    return 0;
}