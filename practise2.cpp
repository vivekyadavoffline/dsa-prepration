//check if a number is a prime number or not 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    }

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "It is prime";
    else
        cout << "It is not prime";

    return 0;
}