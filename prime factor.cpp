#include <iostream>
using namespace std;

// Function to print all prime factors of a given number n
void printPrimeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // n must be odd at this point, so a skip of 2 (i.e., i = i + 2) can be used
    for (int i = 3; i * i <= n; i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // This condition is to check if n is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Prime factors of " << number << " are: ";
    printPrimeFactors(number);

    return 0;
}

