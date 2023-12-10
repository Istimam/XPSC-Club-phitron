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
    vector<ll> v(n);
    ll mx = LLONG_MIN;
    ll mn = LLONG_MAX;
    For(i,0,n){
        cin >> v[i];
        mx = max(v[i], mx);
        mn = min(v[i], mn);
    }
    if(mn == mx){
        cout << 0 << nl;
        return;
    }
    ll dif = mx - mn;
    For(i,2,(n/2)+1){
        // vector<ll> vx;
        ll mx1 = LLONG_MIN, mn1 = LLONG_MAX;
        if(n%i == 0){
        // cout << i << ' ';
            ll sum = 0;
            int j = 0, x = 0, k = i;
            while (j<n)
            {
                sum += v[j];
                x++;
                if(x == k){
                    // cout << j <<' ' <<x << ' ';
                    // vx.push_back(sum);
                    mx1 = max(mx1, sum);
                    mn1 = min(mn1, sum);
                    sum = 0;
                    x = 0;
                }
                j++;
            }
        }
        // for(auto f:vx){
        //     cout << f << ' ';
        // }
        // cout << nl;
        ll dif1 = mx1 - mn1;
        if(dif1 > dif){
            dif = dif1;
        }
    }
    cout << dif << nl;
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