#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long x = N;
        long long y = 0;

        while ((x & (x - 1)) == 0) {
            x >>= 1;
            y = (y << 1) + 1;
        }

        cout << x << " " << (N - y) << endl;
    }

    return 0;
}
