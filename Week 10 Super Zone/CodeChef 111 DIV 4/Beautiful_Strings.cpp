#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin >> s;
    int freq[26] = {0};
    For(i,0,n){
        freq[s[i] - 'a']++;
    }
    ll res = 1;
    For(i,0,26){
        res = (res * (freq[i] + 1)) % MOD;
    }
    cout << res-1 << nl;
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