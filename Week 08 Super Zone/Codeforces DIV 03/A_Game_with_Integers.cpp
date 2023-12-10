#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Check if Vova wins in the first move itself
        if (n % 3 == 0) {
            cout << "Second\n";
        } else {
            // If not, Vanya can make the number divisible by 3 in the next move
            cout << "First\n";
        }
    }

    return 0;
}
