#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll x = n - 1;
    ll ans = 1;
    if(n == 1){
        cout << 0 << nl;
    }
    else if((n&x) == 0){
        cout << n - 1 << nl;
    }
    else{
        while (ans < n)
        {
            ans <<= 1;
        }
        if(ans > 2){
            ans >>= 1;
            cout << ans-1 << nl;
        }
        else{
            cout << ans-1 << nl;
        }
    }
/*Using Left Shift*/
    // ll ans = 0;
    // while (n > 1)
    // {
    //     n >>= 1;
    //     ans++;
    // }
    // int p = 1 << ans;
    // cout << p-1 << nl;

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
