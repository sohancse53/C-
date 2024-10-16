#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    if (n < 2) return false;      // Numbers less than 2 are not prime
    if (n == 2) return true;      // 2 is prime
    if (n % 2 == 0) return false; // Even numbers greater than 2 are not prime
    for (int i = 3; i * i <= n; i += 2) { // Check for odd factors only
        if (n % i == 0) return false; // If divisible, not prime
    }
    return true; // If no divisors found, it's prime
}

int main() {
    int t, n;
    cin >> t; // Number of test cases
    while (t--) {
        cin >> n; // Input number to check
        if (prime(n)) 
            cout << "yes" << endl; // If prime
        else 
            cout << "no" << endl; // If not prime
    }
    return 0;
}
