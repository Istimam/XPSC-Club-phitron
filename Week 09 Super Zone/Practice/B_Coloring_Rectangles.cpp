#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int cnt = n * m;
    if(cnt > 2){
        cout << (cnt + 2) / 3 << nl;
        return;
    }
    cout << 1 << nl;
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