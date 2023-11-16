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
    int mx = INT_MIN;
    For(i,0,n){
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    int smx = INT_MIN;
    For(i,0,n){
        if(v[i] < mx){
            smx = max(smx, v[i]);
        }
    }
    cout << mx+smx << nl;
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