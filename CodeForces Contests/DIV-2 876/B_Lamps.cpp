#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n+1);
    int val = n;
    while (val--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        sort(v[i].begin(), v[i].end(), greater<int>());
        int x = v[i].size();
        int mn = min(x, i);
        if(!v[i].empty()){
            for (int j = 0; j < mn; j++)
            {
                ans += v[i][j];
            }   
        }
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