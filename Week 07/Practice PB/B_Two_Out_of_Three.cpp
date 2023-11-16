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
    map<int, vector<int>> mp;
    For(i,1,n+1){
        int x;
        cin >> x;
        mp[x].push_back(i);
    }
    bool ans = false;
    vector<int> v(n + 1, INT_MAX);
    int cnt = 0, va = 2;
    for(auto i:mp){
        if(i.second.size() >= 2){
            v[i.second[0]] = va;
            va++;
            if(va > 3){
                break;
            }
        }
    }
    if(va > 3){
        For(i,1,n+1){
            if(v[i] == INT_MAX){
                cout << 1 << ' ';
            }
            else
                cout << v[i] << ' ';
        }
        cout << nl;
    }
    else
        cout << -1 << nl;
    
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