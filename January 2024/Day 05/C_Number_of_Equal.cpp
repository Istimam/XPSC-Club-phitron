#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    map<int, int> mp;
    For(i,0,a){
        int x;
        cin >> x;
        mp[x]++;
    }
    ll ans = 0;
    map<int, int> mp2;
    set<int> s;
    For(i,0,b){
        int x;
        cin >> x;
        s.insert(x);
        mp2[x]++;
    }
    for(auto i:s){
        if(mp.find(i) != mp.end()){
            ans += static_cast<ll>(mp[i]) * static_cast<ll>(mp2[i]);
        }
    }
    cout << ans << NL;
    return 0;
}