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
    vector<int> v(n),t;
    For(i, 0, n) cin >> v[i];
    int x = v[0];
    For(i,0,n){
        if(v[i] <= x){
            t.push_back(v[i]);
            x = min(x, v[i]);
        }
    }
    int ans = n;
    int m = t.size();
    for (int i = m-1; i >= 0; i--)
    {
        ans = min(ans, t[i] + n - m + i);
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