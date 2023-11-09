#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    vector<int> vp;
    For(i,0,n)
    {
        int x, y;
        cin >> x >> y;
        if(y == l)
            vp.push_back(x);
    }
    int ans = INT_MAX;
    if(!vp.empty())
    {
        sort(vp.begin(), vp.end(),greater<int>());
        int sum = 0;
        For(i,0,k)
        {
            sum += vp[i];
        }
        ans = sum;
    }
    if(ans == INT_MAX || vp.size() < k)
    {
        cout << -1 << nl;
    }
    else
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