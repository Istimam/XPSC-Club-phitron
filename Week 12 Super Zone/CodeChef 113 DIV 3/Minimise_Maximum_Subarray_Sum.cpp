#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if(n <= k){
        cout << 1 << nl;
        return;
    }
    int xx = ceil(static_cast<double>(n)/(k+1));
    cout << max(n - 2 * k, xx) << nl;
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
