#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int countBits(int n){
    int cnt = 0;
    while (n>0)
    {
        cnt++;
        n = n >> 1;
    }
    return cnt;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    map<int, vector<int>> mp;
    For(i,0,n){
        int cnt = countBits(v[i]);
        mp[cnt].push_back(v[i]);
    }
    ll cnt = 0;
    for(auto i:mp){
        // cout << i.first << ' ';

        if(i.second.size() > 1){
            ll x = (i.second.size() * (i.second.size() - 1)) / 2;
            cnt += x;
        }
        // for(int j:i.second){
        //     if()
        //     cout << j << ' ';
        // }
        // cout << nl;
    }
    cout << cnt << nl;
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