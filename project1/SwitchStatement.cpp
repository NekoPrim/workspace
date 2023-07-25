#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade) {
        case 'A':
        case 'a': cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'B':
        case 'b': cout << "You need 80 - 89 for a B, go study!" << endl;
            break;
        case 'C':
        case 'c': cout << "You need 70 - 79 for an average grade" << endl;
            break;
        case 'D':
        case 'd': cout << "Hmm, you should strive for a better grade.  All you need is 60 -69" << endl;
            break;
        case 'F':
        case 'f':
        {
            char confirm {}; // need to be in {} because declaring variable
            cout << "Are you sure (Y/N)?: ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') {
                cout << "I guess you dont want to study" << endl;
            } else if (confirm == 'n' || confirm == 'N') {
                cout << "Good, go study!" << endl;
            } else {
                cout << "Illegal choice!" << endl;
            }
            break;
        }
        default: cout << "Sorry, not a valid grade" << endl;
    }

    cout << endl;
    cout << "****************************************" << endl;
    cout << endl;

    enum Direction {
        left, right, up, down
    };
    
    Direction heading {left};

    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        default: cout << "OK" << endl; // you need to handle all 4 cases
    }

    return 0;
}