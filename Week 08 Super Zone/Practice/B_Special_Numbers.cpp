#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
ll powerBit(int a,int b)
{
    ll result = 1, base = a;
    while (b > 0)
    {
        if(b&1){
            result = (result * base) % MOD;
        }
        b >>= 1;
        base = (base * base) % MOD;
    }
    return result;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    string v;
    while (k)
    {
        if(k%2 == 0)
            v += '0';
            else
                v += '1';
            k /= 2;
    }
    ll ans = 0;
    For(i,0,v.size()){
        if(v[i] == '1')
            ans += powerBit(n, i);
        ans %= MOD;
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