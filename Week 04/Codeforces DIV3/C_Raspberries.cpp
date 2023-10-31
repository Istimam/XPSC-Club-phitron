#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ops = 0;
        for (int i = 0; i < n; i++) {
            int rem = a[i] % k;
            if (rem <= k / 2) {
                ops += rem;
            } else {
                ops += k - rem;
            }
        }

        cout << ops << endl;
    }

    return 0;
}
