#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long result = 0;
        long long current_sum = 0;

        for (int i = 0; i < n; ++i) {
            current_sum += a[i];
            result = max(result, current_sum);
            if (current_sum < 0) {
                current_sum = 0;
            }
        }

        cout << result << endl;
    }

    return 0;
}
