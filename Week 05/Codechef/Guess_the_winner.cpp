#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function prototype
bool isPrime(long long n);

// Function to determine the winner
string findWinner(long long N) {
    if (N % 2 == 0) {
        return "Bob";
    } else {
        if (N == 1) {
            return "Bob";
        } else {
            if (isPrime(N)) {
                return "Alice";
            } else {
                return "Bob";
            }
        }
    }
}

// Function to check if a number is prime
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        string winner = findWinner(N);
        cout << winner << endl;
    }

    return 0;
}
