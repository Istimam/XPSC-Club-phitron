#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
ll power(ll x,ll MOD,ll n)
{
    if(n == 0)
        return 1;
    else if(n == 1)
        return x;
    else if(n&1)
        return (x * power((x * x) % MOD, MOD, n / 2)) % MOD;
    else
        return (power((x * x) % MOD, MOD, n / 2));
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    cout << power(n,MOD,k) << nl;
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