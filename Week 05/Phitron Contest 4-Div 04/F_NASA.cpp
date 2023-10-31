#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool isPalindrome(int n) {
    int num = n, reversedNum = 0;

    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum == n;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        unordered_map<int, int> freq;
        for (int i = 0; i < N; ++i) {
            for (int j = i; j < N; ++j) {
                int XOR = A[i] ^ A[j];
                freq[XOR]++;
            }
        }

        int count = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (isPalindrome(it->first)) {
                count += it->second * (it->second - 1) / 2;
            }
        }

        cout << count << endl;
    }

    return 0;
}
