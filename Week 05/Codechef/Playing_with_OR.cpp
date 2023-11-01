#include <iostream>
#include <vector>
using namespace std;

int countOddBitwiseORSubarrays(vector<int>& arr, int N, int K) {
    int countOdd = 0;

    for (int i = 0; i < N - K + 1; ++i) {
        int bitwiseOR = 0;

        for (int j = 0; j < K; ++j) {
            bitwiseOR |= arr[i + j];
        }

        if (bitwiseOR % 2 != 0) {
            countOdd++;
        }
    }

    return countOdd;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        int result = countOddBitwiseORSubarrays(arr, N, K);
        cout << result << endl;
    }

    return 0;
}
