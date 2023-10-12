// Section 11
// Recursion - Fibonacci
#include <iostream>
#include <string>

using namespace std;
// Section 11
// Recursion - Fibonacci

#include <iostream>

using namespace std;
unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;	             // base cases
    return fibonacci(n-1) + fibonacci(n-2); // recursion
}

int main() {
    cout << fibonacci(5) << endl;   // 5
    cout << fibonacci(30) << endl;	// 832040 
    cout << fibonacci(40) << endl; // 102334155
    return 0;
}

int sum_of_digits(int n) {
    // Write your code below this line
    if (n == 0)
        return 0;
    return (n % 10 + sum_of_digits(n / 10));
    
    // Write your code above this line
}
