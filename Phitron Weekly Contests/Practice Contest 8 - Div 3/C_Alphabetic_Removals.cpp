#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    if(k >= n){
        cout << nl;
        return 0;
    }
    map<char, int> mp;
    for(auto i:s){
        mp[i]++;
    }
    char c = 'a';
    int cnt = k;
    map<char, int> mpcnt;
    for (int i = 0; i < 26; i++)
    {
        if(mp.find(c) != mp.end()){
            mpcnt[c] = mp[c] - cnt;
            cnt -= mp[c];
            // cout << c << ' ' << mp[c] << nl;
        }
        c++;
    }
    string newString = "";
    for(auto i:s){
        if(mp[i] <= 0)
            continue;
        if(mp[i] > mpcnt[i]){
            mp[i]--;
        }
        else{
            newString += i;
            mp[i]--;
            mpcnt[i]--;
        }
    }
    cout << newString << nl;
    // for(auto i:mp)
    //     cout << i.first << ' ' << i.second << nl;
    // for(auto i:mpcnt)
    //     cout << i.first << ' ' << i.second << nl;
    return 0;
}