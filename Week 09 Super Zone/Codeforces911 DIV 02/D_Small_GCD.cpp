#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate the sum of f(ai, aj, ak) for each triplet
long long calculateSum(vector<int>& arr) {
    int n = arr.size();
    long long result = 0;

    // Iterate through all triplets
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            // Find the two smaller elements among arr[i], arr[j], and arr[k]
            int a = min(arr[i], arr[j]);
            int b = max(arr[i], arr[j]);

            // Calculate gcd(a, b) and add to the result
            result += gcd(a, b);

            // Update GCD for the triplet using gcd(gcd(a, b), c)
            for (int k = j + 1; k < n; k++) {
                result += gcd(gcd(a, b), arr[k]);
            }
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Calculate and print the sum for each test case
        cout << calculateSum(arr) << endl;
    }

    return 0;
}
