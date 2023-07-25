#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    const int dollar {100}, quarter {25}, dime {10}, nickel {5};

    cout << "\nEnter an amount in cents: ";
    int amount_in_cents {};
    cin >> amount_in_cents;

    cout << endl;

    int remainder_in_cents {};

    cout << "You can provide this change as follows:" << endl;
    cout << "dollars: " << amount_in_cents / dollar << endl;
    remainder_in_cents = amount_in_cents % dollar;
    cout << "quarters: " << remainder_in_cents / quarter << endl;
    remainder_in_cents = remainder_in_cents % quarter;
    cout << "dimes: " << remainder_in_cents / dime << endl;
    remainder_in_cents = remainder_in_cents % dime;
    cout << "nickels: " << remainder_in_cents / nickel << endl;
    remainder_in_cents = remainder_in_cents % nickel;
    cout << "pennies: " << remainder_in_cents << endl;

    return 0;
}