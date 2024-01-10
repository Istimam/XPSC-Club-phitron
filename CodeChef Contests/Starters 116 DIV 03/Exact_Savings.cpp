// #include <bits/stdc++.h>
// #define For(i, A, B) for (int i = A; i < B; i++)
// #define NL '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// using namespace std;
// bool canMakeX(int x, const vector<int>& elements) {
//     std::unordered_set<int> seen;

//     for (int element : elements) {
//         int complement = x - element;

//         if (seen.find(complement) != seen.end()) {
//             return true;
//         }
//         seen.insert(element);
//     }
//     return false;
// }
// void solve()
// {
//     int n, x, z;
//     cin >> n >> x >> z;
//     vector<int> v(n);
//     For(i, 0, n) cin >> v[i];

//     int val = 0;
//     if (z % x == 0)
//     {
//         val = z / x;
//     }
//     else
//     {
//         val = (z / x) + 1;
//     }

//     int tk = x * val;
//     int spent = tk - z;

//     if (spent == 0)
//     {
//         cout << val << NL;
//         return;
//     }
//     if(canMakeX(spent,v)){
//         cout << val << NL;
//         return;
//     }
//     cout << -1 << NL;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
#define For(i, A, B) for (int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;

bool canMakeX(int x, const vector<int>& elements) {
    unordered_set<int> seen;

    for (int element : elements) {
        int complement = x - element;

        if (seen.find(complement) != seen.end()) {
            // Element and its complement both found, so they can't be used again
            return true;
        }

        seen.insert(element);
    }
    return false;
}

void solve() {
    int n, x, z;
    cin >> n >> x >> z;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];

    int val = 0;
    if (z % x == 0) {
        val = z / x;
    } else {
        val = (z / x) + 1;
    }

    int spent = x * val - z;

    if (spent == 0 || canMakeX(spent, v)) {
        cout << val << NL;
        return;
    }

    cout << -1 << NL;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


