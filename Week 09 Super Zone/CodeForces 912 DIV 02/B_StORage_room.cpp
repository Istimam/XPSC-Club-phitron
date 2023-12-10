#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> M(n, vector<int>(n));

        // Input the table M
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> M[i][j];
            }
        }

        // Find the candidate values
        vector<int> a(n, 0);

        for (int i = 0; i < n; ++i) {
            for (int bit = 0; bit < 30; ++bit) {
                bool valid = true;

                for (int j = 0; j < n; ++j) {
                    if (j != i && ((M[i][j] >> bit) & 1) == 0) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    a[i] |= (1 << bit);
                }
            }
        }

        // Output the result
        cout << "YES\n";
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
