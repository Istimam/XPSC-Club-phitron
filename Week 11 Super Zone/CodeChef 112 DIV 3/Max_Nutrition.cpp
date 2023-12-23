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
    map<int,vector<int>> ss;
    For(i,0,n){
        cin >> v[i];
    }
    For(i,0,n){
        int x;
        cin >> x;
        ss[v[i]].push_back(x);
    }
    int ans = 0;
    for(auto i:ss){
        // cout << i.first << "->";
        int x = *max_element(i.second.begin(), i.second.end());
        // cout << x << nl;
        if(x > 0){
            ans += x;
        }
        // for(auto j:i.second){
        //     cout << j << ' ';
        // }
        // cout << nl;
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