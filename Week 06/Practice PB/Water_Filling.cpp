#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    if(a == 0)
        cnt++;
    if(b == 0)
        cnt++;
    if(c == 0)
        cnt++;
    if(cnt > 1)
        cout << "Water filling time" << nl;
    else
        cout << "Not now" << nl;
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