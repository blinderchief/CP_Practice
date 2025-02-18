#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int count, found = 0, number = 2;
    cin >> count;
    while (found < count) {
        if (isPrime(number) && isPalindrome(number)) {
            cout << number << " ";
            found++;
        }
        number++;
    }
    return 0;
}
