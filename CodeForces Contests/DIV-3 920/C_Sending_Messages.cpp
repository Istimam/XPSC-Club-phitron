#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES"<<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<ll> v(n);
    For(i, 0, n) cin >> v[i];
    ll p = 0, mn;
    For(i,0,n){
        mn = min(b, abs(v[i] - p) * a);
        f -= mn;
        p = v[i];
    }
    if(f>0)
        cout << "YES" << NL;
    else{
        cout << "NO" << NL;
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