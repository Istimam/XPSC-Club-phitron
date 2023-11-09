#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    if(y%x == 0)
    {
        int xx = y / x;
        cout << 1 << ' ' << xx << nl;
    }
    else
    {
        cout << 0 << ' ' << 0 << nl;
    }
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