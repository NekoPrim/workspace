// Section 11
// Math examples

#include <iostream>
#include <cmath>        // required
#include <cstdlib>      // required for rand()
#include <ctime>       // required for time( ) 

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
//    return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    
    double num {};

    cout << "Enter a number (double) : ";
    cin >> num;
    
    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;
    
    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;
    
    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;

    
    double power {};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    
    cout << endl;
    cout << "\n***********************************" << endl;
    cout << endl;

    int random_number {};
    size_t count {10};           // number of random numbers to generate
    int min {1};                  // lower bound (inclusive) 
    int max {6};                 // upper bound (inclusive)
    
    // seed the random number generator
    // If you don't seed the generator you will get the same requence random numbers every run
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));  
    
    for (size_t i{1}; i<=count; ++i)  {
        random_number = rand() % max + min;     // generate a random number [min, max]
        cout << random_number << endl;
    }

    double bill_total {102.78};
    int number_of_guests {5};
    
    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    double individual_bill {static_cast<double> (bill_total) / number_of_guests};
    
    double individual_bill_1 = floor(individual_bill);
    
    double individual_bill_2 = round(individual_bill);
    
    double individual_bill_3  = ceil(individual_bill * 100) / 100;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << "The individual bill at location 2 will be $" << individual_bill_2 << "\n" << "The individual bill at location 3 will be $" << individual_bill_3;

    cout << endl;
    cout << "\n***********************************" << endl;
    cout << endl;

    area_circle();
    area_circle();
    volume_cylinder();

    cout <<  endl;
    return 0;
}

