#include<bits/stdc++.h>
using namespace std;
string ss = "Yes";
void solve()
{
    string s;
    cin >> s;
    if(ss.find(s) != -1)
    {
        cout << "YES" << '\n';
    }
    else
        cout << "NO" << '\n';
}
int main()
{
    int x = 5;
    while (x--)
    {
        ss += ss;
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}