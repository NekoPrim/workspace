// Arithmetic Operator
/*
    + addition
    - subtration
    * multiplication
    / division
    %  modulo or remainder (works only with integers types)
*/
#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num1 (200);
    int num2 (100);

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result (0);

    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num2 / num1;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    num1 = 10;
    num2 = 3;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    result = num1 * 10 + num2;

    cout << 5/10 << endl;

    cout << 5.0/10.0 << endl;

    cout << endl;

    cout << "*******************************************" << endl;

    cout << endl;

    // this number wont ever change!
    const double usd_per_eur {1.19};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";

    double euros {0.0};
    double dollars {0.0};

    cin >> euros;
    dollars = euros * usd_per_eur;

    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

    cout << endl;

    return 0;
}