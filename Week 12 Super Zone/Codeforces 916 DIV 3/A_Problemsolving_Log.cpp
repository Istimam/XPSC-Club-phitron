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
    string s;
    cin >> s;
    map<int, int> mp;
    for(auto i:s){
        mp[i - 'A']++;
    }
    int cnt = 0;
    for(auto i:mp){
        // cout << i.first << ' ' << i.second << nl;
        if(i.first+1 <= i.second)
            cnt++;
    }
    cout << cnt << nl;
    // For(i,0,26){

    //     if(mp.find(i) != mp.end()){
    //         if(mp[i] == i)
    //         cnt++;
    //     }
    // }
    // cout << cnt << nl;
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