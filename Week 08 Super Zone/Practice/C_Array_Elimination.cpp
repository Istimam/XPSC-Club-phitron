#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    For(i, 0, n) cin >> v[i];
    vector<ll> bit(30);
    For(i,0,n){
        ll x = v[i];
        int cnt = 0;
        while (v[i] > 0)
        {
            cnt++;
            if(cnt >= 30)break;
            if(v[i]%2 != 0){
                bit[cnt]++;
            }
            v[i] >>= 1;
        }
    }
    // for(auto i:bit){
    //     cout << i << ' ';
    // }
    For(k,1,n+1){
        bool ok = true;
        For(j,1,30){
            if(bit[j]%k != 0){
                ok = false;
                break;
            }
        }
        if(ok)
            cout << k << ' ';
    }
    cout << nl;
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