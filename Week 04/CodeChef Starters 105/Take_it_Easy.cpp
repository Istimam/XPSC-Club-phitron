#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool possible = true;

        // Check if it's possible to redistribute candies evenly
        int min_candies = a[0];
        int total_moves = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < min_candies) {
                possible = false;
                break;
            }
            int moves = (a[i] - min_candies) / 2;
            total_moves += moves;
        }

        if (possible && (total_moves == 0 || total_moves % 2 == 0)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
