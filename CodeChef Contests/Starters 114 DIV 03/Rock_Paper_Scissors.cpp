#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    reverse(s.begin(), s.end());
    string ans;
    for (int i = 0; i < n/2+1; i++)
    {
        if(s[i] == 'R')
            ans.push_back('P');
        else if(s[i] == 'P')
            ans.push_back('S');
        else
            ans.push_back('R');
    }
    int cnt = 0, x = 0;
    for (int i = n/2+1; i < n; i++)
    {
        if(s[i] == 'R')
            cnt++;
        ans.push_back('P');
        x++;
    }
    reverse(ans.begin(), ans.end());
    for (int i = x; i < n; i++)
    {
        if(cnt && ans[i] != 'P')
            ans[i] = 'P', cnt--;
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