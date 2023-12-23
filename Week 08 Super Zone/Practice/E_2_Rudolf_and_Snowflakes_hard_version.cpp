#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const ll mx = 1e18 + 10;
const int MOD = 1e9 + 7;
using namespace std;
set<ll> st;
void check()
{
    for(int i=2;i<=MOD;i++){
        ll base = i + 1;
        for (ll j = i*i; j <= mx; j *= i)
        {
            base += j;
            if(base >= mx)break;
            st.insert(base);
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    if(st.find(n) != st.end()){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
    }
}
int main()
{
    int t;
    cin >> t;
    check();
    while (t--)
    {
        solve();
    }
    return 0;
}