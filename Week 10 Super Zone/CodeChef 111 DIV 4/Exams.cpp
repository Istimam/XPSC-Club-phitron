#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int s, n, p;
    cin >> s >> n >> p;
    int std = (s * n) / 2;
    if(p > std){
        cout << "YES" << nl;
    }
    else
        cout << "NO" << nl;
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