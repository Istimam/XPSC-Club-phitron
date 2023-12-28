#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, b;
    cin >> n >> b;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool found = false;
    for (int i = 0; i < n; ++i) {
        int bitwise_and = arr[i];
        for (int j = i; j < n; ++j) {
            bitwise_and &= arr[j];
            if (bitwise_and == b) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
