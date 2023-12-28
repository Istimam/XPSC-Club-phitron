#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;

bool isPerfectSquare(ll num) {
    ll sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

void solve() {
    int n;
    cin >> n;

    ll sum = 0;
    ll currentElement;

    For(i, 0, n) {
        cin >> currentElement;
        sum += currentElement;
    }

    if (isPerfectSquare(sum))
        cout << "YES" << nl;
    else {
        cout << "NO" << nl;
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
