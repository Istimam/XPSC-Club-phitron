#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    string a, k;
    cin >> a >> k;
    if(k == "a")
    {
        cout << 1 << nl;
    }
    else
    {
        int it = k.find("a");
        if(it != string::npos)
        cout<<-1<<nl;
        else
        {
            ll x = pow(2, a.size());
            cout << x << nl;
        }
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