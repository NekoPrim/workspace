#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int score {};
    cout << "Enter your score on the exam (0 - 100): ";
    cin >> score;
    char letter_grade {};

    if (score >= 0 && score <= 100) {  // old term: if else ladder
        if (score >= 90) {
            letter_grade = 'A';
        } else if (score >= 80) {
            letter_grade = 'B';
        } else if (score >= 70) {
            letter_grade = 'C';
        } else if (score >= 60) {
            letter_grade = 'D';
        } else {
            letter_grade = 'F';
        }

        cout << "Your grade is: " << letter_grade << endl;

        if (letter_grade == 'F') {
            cout << "Sorry, you must repeat this class" << endl;
        } else {
            cout << "Congrats!" << endl;
        }
    } else {
        cout << "Sorry, " << score << " is not in range" << endl;
    }

    cout << endl;
    cout << "******************************************" << endl;
    cout << endl;

    int length {}, width {}, height {};
    double base_cost {2.50};

    const int tier1_threshold {100}; // volume
    const int tier2_threshold {500}; // volume

    int max_dimension_length {10};  // inches

    double tier1_surharge {0.10};  // 10% extra
    double tier2_surcharge {0.25};  // 25% extra

    // All dimension must be 10 inches or less

    int package_volume {};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;

    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    } else {
        double package_cost {base_cost};
        package_volume = length * width * height;

        if (package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << "adding tier 2 surcharge" << endl;
        } else if (package_volume > tier1_threshold) {
            package_cost += package_cost + tier1_surharge;
            cout << "adding tier 1 surcharge" << endl;
        }

        cout << std::fixed << std::setprecision(2);
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost: $" << package_cost << " to ship" << endl;

    }

    return 0;
}