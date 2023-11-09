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
    vector<bool> a(n + 1);
    a[0] = true;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1' || s[i] == '?')
        {
            a[i + 1] = a[i];
        }
        else
        {
            a[i + 1] = 0;
        }
    }
    vector<bool> b(n + 1);
    b[0] = true;
    for (int i = n-1; i >= 0; i--)
    {
        if(s[i] == '0' || s[i] == '?')
        {
            b[n - i] = b[n - i - 1];
        }
        else
        {
            b[n - i] = 0;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] && b[n-i-1])
            cnt++;
    }
    cout << cnt << nl;

    // for(auto i:b)
    //     cout << i << ' ';
    // cout << nl;
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