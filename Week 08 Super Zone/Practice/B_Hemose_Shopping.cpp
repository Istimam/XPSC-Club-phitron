#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    For(i,0,n){
        cin >> v[i];
    }

    if(is_sorted(v.begin(), v.end())){
        cout << "YES" << nl;
        return;
    }
    if(x == n)
    {
        cout << "NO" << nl;
        return;
    }
    ll xx = n - x;
    vector<ll> vv;
    For(i,0,xx){
        vv.push_back(v[i]);
    }
    for (int i = n-1; i >= n-xx; i--)
    {
        vv.push_back(v[i]);
    }
    sort(vv.begin(), vv.end());
    vector<ll> ans;
    For(i,0,vv.size()/2){
        ans.push_back(vv[i]);
    }
    For(i,x,n-x){
        ans.push_back(v[i]);
    }
    For(i,vv.size()/2,vv.size()){
        ans.push_back(vv[i]);
    }
    if(is_sorted(ans.begin(),ans.end())){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
    }
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