#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<string, ll> mp;
    // ll p1[26] = {0};
    // ll p2[26] = {0};
    map<char, ll> p1;
    map<char, ll> p2;
    vector<string> vs;
    while (n--)
    {
        string s;
        cin >> s;
        vs.push_back(s);
        mp[s]++;
        p1[s[0]]++;
        p2[s[1]]++;
    }
    ll sum = 0;
    for(auto i:vs){
        ll pos1 = 0, pos2 = 0;
        pos1 = (p1[i[0]] - 1) - (mp[i] - 1);
        pos2 = (p2[i[1]] - 1) - (mp[i] - 1);
        p1[i[0]]--;
        p2[i[1]]--;
        mp[i]--;
        sum += pos1 + pos2;
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