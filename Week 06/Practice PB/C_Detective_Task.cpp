#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int lastZero = n - 1;
    for (int i = n-1; i >= 0; i--)
    {
        if(s[i] == '0')
            lastZero = i;
    }
    int ans = 0;
    for (int i = lastZero; i >= 0; i--)
    {
        ans++;
        if(s[i] == '1')
        break;
    }
    cout << ans << nl;
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