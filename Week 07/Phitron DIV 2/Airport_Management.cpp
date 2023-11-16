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
    vector<int> L(n),D(n);
    map<int, int> mp;
    For(i,0,n){
        cin >> L[i];
        mp[L[i]]++;
    }
    For(i,0,n){
        cin >> D[i];
        mp[D[i]]++;
    }
    int mx = INT_MIN;
    for(auto i:mp){
        mx = max(mx, i.second);
        // cout << i.first << ' ' << i.second << nl;
    }
    cout << mx << nl;
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