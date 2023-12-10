#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }

        int total_moves = c[0] + c[n - 1]; // Moves to teleport the chip to the ends

        for (int i = 1; i < n; i++) {
            total_moves += max(0, c[i] - c[i - 1]); // Moves to move the chip to the right
        }

        cout << total_moves << endl;
    }

    return 0;
}
