#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << endl;

    int total {0};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter 3 integers separated bye spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double>(total) / count;
    // average = (double)total / count // old C-style cast

    cout << "The 3  numbers werer: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sume of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;
    

    return 0;
}