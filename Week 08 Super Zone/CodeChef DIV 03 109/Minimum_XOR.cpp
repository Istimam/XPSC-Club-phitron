#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = INT_MIN;
    int x = 0;
    For(i,0,n){
        cin >> v[i];
        x ^= v[i];
        mx = max(mx, v[i]);
    }
    if(x == 0){
        cout << 0 << nl;
        return;
    }
    int fnd = x;
    For(i,0,n){
        fnd = min(fnd, v[i] ^ x);
    }
    cout << fnd << nl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}