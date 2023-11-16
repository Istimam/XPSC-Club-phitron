#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n%2 == 0)
    {
        for (int i = n; i > 0; i--)
        {
            cout << i << ' ';
        }
        cout << nl;
    }
    else
        cout << -1 << nl;
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