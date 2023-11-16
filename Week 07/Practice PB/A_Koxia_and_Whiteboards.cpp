#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll sum = 0;
    vector<ll> v1(n), v2(m);
    For(i,0,n){
        cin >> v1[i];
        sum += v1[i];
    }
    For(i,0,m){
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    ll ans = 0;
    for(auto i:v1){
        ans += i;
    }
    For(i,0,m){
        ll temp = v1[0];
        ans -= v1[0];
        v1[0] = v2[i];
        ans += v2[i];
        sort(v1.begin(), v1.end());
    }
    // }
    cout << ans << nl;
    // cout << nl;
    // for(auto i:v2)
    //     cout << i << ' ';
    // cout << nl;
    // cout << sum << nl;
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