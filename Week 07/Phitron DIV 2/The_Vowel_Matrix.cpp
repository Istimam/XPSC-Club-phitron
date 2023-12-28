#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
#define N const 10e9 + 7;
using namespace std;
bool check(char s)
{
    if(s == 'a' || s=='e'|| s == 'i' || s=='o'||s == 'u')
    {
        return true;
    }
    return false;
}
void solve()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin >> s;
    int i = 0, j = 0, cnt = 0;
    map<char, int> mp;
    while (j<n)
    {
        if(check(s[j]))
        {
            cnt++;
        }
        if(cnt == k)
        {
            break;
            // string ss = s.substr(0, j+1);
            // s.erase(0, j + 1);
            // cout << ss << ' ' << s << nl;
        }
        j++;
    }
    ll sum = 0;
    For(z,j+1,s.size())
    {
        if(check(s[z]))
        {
            sum = z - j;
            break;
        }
    }
    cout << sum << nl;
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