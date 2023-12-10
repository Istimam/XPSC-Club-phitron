#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int r = 1e5 + 5;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    For(i,0,n){
        int x;
        cin >> x;
        if(x <= n)
            mp[x]++;
    }
    vector<int> v(n*2, 0);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        int j = i;
        while (j<=n)
        {
            v[j] += mp[i];
            j += i;
        }
        ans = max(ans, v[i]);
    }
    
    // if(mp.find(1) != mp.end())
    //     ans += mp[1];
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