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
    vector<int> v(n), v2(n);
    For(i,0,n){
        cin >> v[i];
    }
    For(i,0,n){
        cin >> v2[i];
    }
    int maxb = 0, tmp = 0, ans = 0;
    For(i,0,n){
        if(i == k) break;
        tmp += v[i];
        maxb = max(maxb, v2[i]);
        ans = max(tmp + (k - i - 1) * maxb, ans);
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