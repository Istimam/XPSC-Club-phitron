#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    For(i,0,n)
    {
        if(s[i] == '1')
        {
            cnt++;
        }
    }
    int zero = n - cnt;
    if(min(cnt,zero)%2 != 0)
    {
        cout << "Zlatan" << nl;
    }
    else
    {
        cout << "Ramos" << nl;
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