#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n, b, c, d;
    cin >> n >> b >> c >> d;
    ll rac = (n - n % 7) / 7 + 1;
    rac -= (n % 7 == 0 ? 1 : 0);
    ll lef = 1, rig = rac, ans = rac;
    while (lef <= rig)
    {
        ll mid = (lef + rig) / 2;
        if(b <= (mid+1)/2*c+d*mid){
            ans = mid;
            rig = mid - 1;
        }
        else{
            lef = mid + 1;
        }
    }
    ll rac2 = (ans + 1) / 2;
    ll raodeptra = rac2 * c + d * ans;
    b = b - raodeptra;
    ll tmp = rac2;
    b = max(b, 0LL);
    tmp = tmp + (b / c);
    tmp = tmp + (b % c != 0);
    cout << n - tmp << nl;
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