#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n = 3;
    map<char, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        for(auto i:s){
            mp[i]++;
        }
    }
    for(auto I:mp){
        if(I.second == 2){
            cout << I.first << nl;
        }
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