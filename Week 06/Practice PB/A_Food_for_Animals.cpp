#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    ll food = 0;
    if(x > a)
    {
        food += x - a;
    }
    if(y > b)
    {
        food += y - b;
    }
    if(c >= food)
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