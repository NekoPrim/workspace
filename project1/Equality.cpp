#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    bool equal_result {false};
    bool not_equal_result {false};

    int num1 {}, num2 {};

    cout << std::boolalpha; // will display true/false instead

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = {num1 == num2};
    not_equal_result = {num1 != num2};
    cout << "comparison result (equals): " << equal_result << endl;
    cout << "comparison result (not equal): " << not_equal_result << endl;

    cout << endl;

    char char1 {}, char2 {};
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equal_result = {char1 == char2};
    not_equal_result = {char1 != char2};
    cout << "comparison result (equals): " << equal_result << endl;
    cout << "comparison result (not equal): " << not_equal_result << endl;

    cout << endl;

    /*
    can be decieving!!!
    stores about numbers
    11.999999 will be stored at 12
    11.999999 will equal 12
    if comparing doubles, you will want to use something else
    */
    double double1 {}, double2 {};
    cout << "Enter two characters separated by a space: ";
    cin >> double1 >> double2;
    equal_result = {double1 == double2};
    not_equal_result = {double1 != double2};
    cout << "comparison result (equals): " << equal_result << endl;
    cout << "comparison result (not equal): " << not_equal_result << endl;

    cout << endl;

    // mixed expression
    // will convert int to double
    // 10 and 9.99 will still equal
    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;
    equal_result = {num1 == double1};
    not_equal_result = {num1 != double1};
    cout << "comparison result (equals): " << equal_result << endl;
    cout << "comparison result (not equal): " << not_equal_result << endl;

    cout << endl;

    return 0;
}