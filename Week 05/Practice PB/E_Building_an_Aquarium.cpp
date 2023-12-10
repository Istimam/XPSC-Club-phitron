#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    int l = 0, r = INT_MAX;
    ll ans = 0;
    while (l<=r)
    {
        int mid = l + (r - l) / 2;
        ll s = 0;
        For(i,0,n){
            if(v[i] < mid){
                s += mid - v[i];
            }
        }
        if(s > w){
            r = mid - 1;
        }
        else{
            l = mid + 1;
            ans = mid;
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