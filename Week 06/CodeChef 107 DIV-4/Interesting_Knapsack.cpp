#include <iostream>
#include <vector>
using namespace std;

long long knapsackMaxValue(int V, vector<int>& weights, vector<int>& values, int N) {
    vector<long long> dp(V + 1, 0);

    for (int i = 1; i <= N; ++i) {
        for (int j = V; j >= weights[i - 1]; --j) {
            dp[j] = max(dp[j], (long long)values[i - 1] + dp[j - weights[i - 1]]);
        }
    }

    return dp[V];
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, V;
        cin >> N >> V; // Number of items and volume capacity for each test case
        vector<int> weights(N);
        vector<int> values(N);

        for (int i = 0; i < N; ++i) {
            cin >> weights[i] >> values[i]; // Reading volume and value for each item
        }

        long long maxValue = knapsackMaxValue(V, weights, values, N);
        cout << maxValue << endl; // Output the maximum value for the current test case
    }

    return 0;
}
