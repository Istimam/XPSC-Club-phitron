#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dx[4] = {-1, 1, -1, 1};
ll dy[4] = {-1, 1, 1, -1};
void solve() 
{
    int n, m;
    cin >> n >> m;
    ll grid[n + 1][m + 1];
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= m; j++)
            cin >> grid[i][j];

    ll ans = LLONG_MIN;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            ll sum = 0;
            sum += grid[i][j];
            for (ll d = 0; d <= 3; d++)
            {
                ll dxx, dyy;
                dxx = dx[d] + i;
                dyy = dy[d] + j;
                while (dxx <= n && dyy <= m && dxx >= 1 && dyy >= 1)
                {
                    sum += grid[dxx][dyy];
                    dxx += dx[d];
                    dyy += dy[d];
                }
                ans = max(ans, sum);
            }   
        }
    }
    cout << ans << '\n';
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