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
    vector<int> v(n), ans;
    For(i, 0, n) cin >> v[i];
    ans.push_back(v[0]);
    For(i,1,n){
        int x = ans[i - 1] + v[i];
        int y = ans[i - 1] - v[i];
        if(v[i] > 0){
            if(x >= 0 && y >= 0){
                // cout << x << ' ' << y << nl;
                cout << -1 << nl;
                return;
            }
        }
        ans.push_back(x);
    }
    for(auto i:ans)
        cout << i << ' ';
    cout << nl;
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