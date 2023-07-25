#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    for (int num1 {1}; num1 <= 10; ++ num1) {
        for (int num2 {1}; num2 <= 10; ++ num2) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "******************************" << endl;
    }

    int num_items {};
    cout << "\nHow many data items do you have? ";
    cin >> num_items;

    vector <int> data {};

    for (int i {1}; i <= num_items; ++ i) {
        int data_item {};
        cout << "Enter data items " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout << "\nDisplay Histogram" << endl;
    for (auto val: data) {
        for (int i {1}; i <= val; ++ i) {
            if (i % 5 == 0) {
                cout << "*";  // every 5th element displays as *
            } else {
                cout << "-";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}