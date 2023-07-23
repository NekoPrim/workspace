#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

// this program will calculate the area of a room in sq ft
int main() {
    // int room_width {0};
    // cout << "Enter the width of the room: ";
    // cin >> room_width;

    // int room_length {0};
    // cout << "Enter the length of the room: ";
    // cin >> room_length;

    // cout << "The area of the room is " << room_width * room_length << " sq ft." << endl;

    char middle_initial {'J'};
    cout << "My middle initial is " << middle_initial << endl;

    unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {65};
    cout << "There were " << countries_represented << " represented in my meeting" << endl;

    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " in Florida" << endl;

    // using 1 long would cause an overflow
    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on Earth" << endl;

    long long distance_to_alpha_centauri {9461000000000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometeres" << endl;

    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159};
    cout << "PI is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;

    bool game_over {false};
    cout << "The value of GameOver is " << game_over << endl;

    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};

    // you will get a warning using short with product bc of overflow
    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;

    // sizeof
    cout << "sizeof information" << endl;

    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;

    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "long double: " << sizeof(long double) << " bytes" << endl;

    // climits
    cout << "Minimum values" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

    cout << "Maximum values" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX  << endl;
    cout << "short: " << SHRT_MAX  << endl;
    cout << "long: " << LONG_MAX  << endl;
    cout << "long long: " << LLONG_MAX  << endl;

    cout << "sizeof using variable names" << endl;
    int age {21};
    cout << "age is " << sizeof(age) << " bytes" << endl;
    cout << "age is " << sizeof age << " bytes" << endl;

    double wage {22.24};
    cout << "wage is " << sizeof(wage) << " bytes" << endl;
    cout << "wage is " << sizeof wage << " bytes" << endl;

    return 0;
}