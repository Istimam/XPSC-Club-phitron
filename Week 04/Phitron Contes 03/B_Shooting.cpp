#include <bits/stdc++.h>
#define For(i, A, B) for(int i = A; i < B; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> res;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int pos = -1;
        for (int j = 0; j < n; j++) {
            if (pos == -1 || a[j] > a[pos]) {
                pos = j;
            }
        }
        res.push_back(pos + 1);
        ans += i * a[pos] + 1;
        a[pos] = 0;
    }

    cout << ans << endl;
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
