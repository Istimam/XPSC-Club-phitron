#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    z *= (24 * 60);
    if(x*y <= z)
    {
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