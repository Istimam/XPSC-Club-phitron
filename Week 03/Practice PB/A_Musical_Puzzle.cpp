#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> ss;
    int cnt = 0;
    For(i,0,n-1)
    {
        string s1 = s.substr(i, 2);
        set<string>::iterator fnd = ss.find(s1);
        // cout << s1 << '\n';
        if(fnd == ss.end())
        {
            ss.insert(s1);
            cnt++;
        }
    }
    cout << cnt << '\n';
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