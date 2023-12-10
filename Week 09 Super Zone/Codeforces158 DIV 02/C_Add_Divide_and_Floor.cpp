#include <bits/stdc++.h>
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

        int min_ops = INT_MAX;
        int chosen_x = 0;

        for (int x = 0; x <= 32; x++) {
            int operations = 0;
            for (int i = 0; i < n; i++) {
                int rounded = (a[i] + (1LL << x) - 1) / (1LL << x);
                operations += abs(a[i] - rounded);
            }

            if (operations < min_ops) {
                min_ops = operations;
                chosen_x = x;
            }
        }

        cout << min_ops << endl;

        if (min_ops <= n) {
            for (int i = 0; i < min_ops; i++) {
                cout << (1LL << chosen_x) << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
