#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n, str;
    cin >> n >> str;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    ll l = 0, r = INT_MAX, s, ans;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        s = str;
        For(i,0,n){
            if(v[i] > mid){
                    s -= v[i];
            }
        }
        if(s < 1){
            l = mid + 1;
        }
        else{
            ans = mid;
            r = mid - 1;
        }
    }
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