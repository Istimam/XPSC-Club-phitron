#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char, int> mp;
    For(i,0,n){
        mp[s[i]]++;
    }    
    // for(auto i:mp){
    //     cout << i.first << ' ' << i.second << nl;
    // }
    if(mp['B'] == k){
        cout << 0 << nl;
    }
    else{
        cout << 1 << nl;
        char c = 'B';
        if(k < mp[c]){
            For(i,0,n){
                if(s[i] == c){
                    mp[c]--;
                    if(mp[c] == k){
                        cout << i + 1 << ' ' << 'A' << nl;
                        break;
                    }
                }
            }
        }
        else{
            char c = 'A';
            For(i,0,n){
                if(s[i] == c){
                    mp['B']++;
                    if(mp['B'] == k){
                        cout << i + 1 << ' ' << 'B' << nl;
                        break;
                    }
                }
            }
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