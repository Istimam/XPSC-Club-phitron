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
    map<int, int> mp;
    For(i,0,n){
        cin >> v[i];
        mp[v[i]]++;
    }
    set<int> ss;
    for(auto i:mp){
        ss.insert(i.second);
    }
    int cnt = INT_MAX;
    for(auto i:ss){
        int ans = 0;
        for(auto j:mp){
            if(j.second < i){
                ans += j.second;
            }
            else
                ans += abs(i - j.second);
        }
        cnt = min(cnt, ans);
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