#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int i = 0, j = 0, ss = 0;
    int cnt = 0;
    int mn = INT_MAX;
    while (j<n)
    {
        if(s[j] == 'W')
        {
            cnt++;
        }
        if(j >= k-1)
        {
            // string ssss = s.substr(i, k);
            mn = min(mn, cnt);
            if(s[i] == 'W')
            {
                cnt--;
            }
            // cout << ssss << nl;
            i++;
        }
        j++;
    }
    cout << mn << nl;
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