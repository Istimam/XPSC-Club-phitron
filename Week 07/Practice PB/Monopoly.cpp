#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a > (b+c+d)){
        cout << "YES" << nl;
    }
    else if(b > (a+c+d)){
        cout << "YES" << nl;
    }
    else if(c > (a+b+d)){
        cout << "YES" << nl;
    }
    else if(d > (a+b+c)){
        cout << "YES" << nl;
    }
    else {
        cout << "NO" << nl;
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