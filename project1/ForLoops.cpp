#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    for (int i {1}; i <= 10; ++ i) {
        cout << i << endl;
    }

    for (int i {1}; i <= 10; i += 2) {
        cout << i << endl;
    }

    for (int i {10}; i > 0; -- i) {
        cout << i << endl;
    }

    for (int i {10}; i <= 100; i += 10) {
        if (i % 15 == 0) {
            cout << i << endl;
        }
    }

    // comma operator
    for (int i {1}, j {5}; i <=5; ++ i , ++ j) {
        cout << i << " + " << j << " = " << (i +j) << endl;
    }

    for (int i {1}; i <= 100; ++i) {
        // cout << i;
        // if (i % 10 == 0) {
        //     cout << endl;
        // } else {
        //     cout << " ";
        // }

        // conditional operator
        cout << i << (i % 10 == 0 ? "\n" : " ");
    }

    vector <int> nums {10, 20, 30, 40, 50};

    // make sure comparing same types!
    // changed int i to unsigned i to match nums.size() type
    for (unsigned i {0}; i < nums.size(); ++ i) {
        cout << nums[i] << endl;
    }

    cout << endl;
    return 0;
}