#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    int cnt = 0, mx = 0;
    vector<int> vv(n - 1);
    For(i,0,n){
        mx = max(mx, v[i]);
        vv[i] = mx;
    }
    For(i,0,n){
        if(v[i] < vv[i])
            cnt++;
    }
    cout << cnt << nl;
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