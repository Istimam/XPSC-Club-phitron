#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
ll f(ll x,ll k,ll n){
    return (x % k) * ((n - x) % k);
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    if(k < n){
        cout << n / 2 << nl;
    }    
    else{
        ll op1 = (n % k) / 2;
        ll op2 = (n % k + k) / 2;
        if(f)
    }
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