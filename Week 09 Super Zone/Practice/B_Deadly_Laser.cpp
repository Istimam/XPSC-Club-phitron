#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, m, x, y, d;
    cin >> n >> m >> x >> y >> d;
    bool ans = true;
    if(x+d >= n && y+d>=m)
        ans = false;
    if(x-d <= 1 && y-d <= 1)
        ans = false;
    if(x-d <= 1 && x+d >= n)
        ans = false;
    if(y-d <= 1 && y+d >=m)
        ans = false;
    if(!ans)
        cout << -1 << nl;
    else
        cout << n + m - 2 << nl;
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