#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::endl;
using std::vector;
using std::fixed;
using std::setprecision;

int main() {
    int scores [] {10, 20, 30};

    // can use auto instead of int
    for (int score: scores) {
        cout << score << endl;
    }

    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    double average_temp {}, total {};

    for (auto temp: temperatures) {
        total += temp;

        // make sure your vector isnt empty!
        if (temperatures.size() != 0) {
            // set result to 2 decimal places
            cout << fixed << setprecision(1);
            average_temp = total / temperatures.size();
        }
    }

    for (auto val: {1, 2, 3, 4, 5}) {
        cout << val << endl;
    }

    for (auto c: "This is a test") {
        if (c != ' ') {
            cout << c;
        }
    }

    for (auto c: "This is a test") {
        if (c == ' ') {
            cout << "\t";
        } else {
            cout << c;
        }
    }

    cout << endl;
    return 0;
}