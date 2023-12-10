#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll t;
    cin >> t;
    vector<vector<ll>> v(t);
    For(i,0,t){
        ll a;
        cin >> a;
        For(j,0,a){
            ll x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    ll mn1 = INT_MAX;
    ll mn2 = INT_MAX;
    for (int i = 0; i < t; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    for(auto i:v){
        mn1 = min(i[0], mn1);
        mn2 = min(i[1], mn2);
    }
    ll ans = 0, cnt = 0;
    For(i,0,t){
        if(v[i][1] == mn2 && cnt == 0){
            cnt++;
        }
        else{
            ans += v[i][1];
        }
    }
    ans += mn1;
    cout << ans << nl;
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