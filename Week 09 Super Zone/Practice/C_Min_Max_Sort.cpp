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
    vector<int> pos(n + 1);
    For(i,1,n+1){
        int x;
        cin >> x;
        pos[x] = i;
    }
    if(n == 1){
        cout << 0 << nl;
        return;
    }
    int L = (n + 1) / 2;
    int R = (n + 2) / 2;
    int ans = (n + 1) / 2;
    while (L >= 1 && (L == R || (pos[L] < pos[L+1]) && pos[R] > pos[R-1]))
    {
        // cout << L << ' ' << R << nl;
        ans--;
        R++;
        L--;
    }
    cout<<ans<<nl;
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