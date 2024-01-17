#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES"<<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(2, 0));
    For(i,0,n){
        For(j,0,2){
            cin >> v[i][j];
        }
    }
    ll l = 0, r = INT_MAX;
    unordered_map<ll, ll> mp;
    For(i,0,n){
        if(v[i][0] == 1){
            l = max(l, v[i][1]);
        }
        else if (v[i][0] == 2)
        {
            r = min(r, v[i][1]);
        }
        else{
            mp[v[i][1]]++;
        }
        
    }
    ll cnt = 0;
    for(auto i:mp){
        if(i.first >= l && i.first <= r){
            cnt++;
        }
    }
    ll ans = r - l + 1 - cnt;
    if(r < l || ans < 0){
        cout << 0 << NL;
        return;
    }
    cout << ans << NL;
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