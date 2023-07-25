#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num {};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;

    // will continue to execute until num is no longer greater than 0
    while (num > 0) {
        cout << num << endl;
        -- num;
    }
    cout << "Blastoff!" << endl;

    cout <<"\nEnter a positive ineger to count up to: ";
    cin >> num;

    int i {1};
    while (num >= i) {
        cout << i << endl;
        i ++;
    }
    cout << "Blastoff!" << endl;

    cout << "\nEnter an integer less than 100: ";
    cin >> num;

    // bases of input validation
    while (num >= 100) {
        cout << "Enter an integer less than 100: ";
        cin >> num;
    }
    cout << "Thanks" << endl;

    // input validation boolean-flag
    bool done {false};

    while (!done) {
        cout << "\nEnter an integer between 1 and 5: ";
        cin >> num;

        if (num <= 1 || num >=5) {
            cout << "Out of range, try again" << endl;
        } else {
            cout << "Thanks" << endl;
            done = true; // super important! means we're done! infinite loop without it!
        }
    }

    return 0;
}