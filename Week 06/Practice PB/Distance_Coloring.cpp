#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    if(n==1){
        cout << k << nl;
        return;
    }
    ll ans = 1;
    for (int i = 0, z = k; i < min(n, k); i++, z--)
    {
        (ans *= z) %= MOD;
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