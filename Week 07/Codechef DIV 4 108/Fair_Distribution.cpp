#include <iostream>
using namespace std;

bool isFairDistribution(int n, string s) {
    int maxDiff = 0;
    int currentDiff = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            currentDiff += i + 1;
        } else {
            currentDiff -= i + 1;
        }

        maxDiff = max(maxDiff, abs(currentDiff));
    }

    return maxDiff <= n;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (isFairDistribution(n, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
