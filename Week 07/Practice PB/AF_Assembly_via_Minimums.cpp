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
    ll a = (n * (n - 1)) / 2;
    vector<int> v(a);
    map<int, int> mp;
    For(i,0,a){
        cin >> v[i];
        mp[v[i]]++;
    }
    int mx = INT_MIN;
    for (int i = n-1; i > 0; i--)
    {
        for(auto j:mp){
            if(j.second >= i){
                cout << j.first << ' ';
                mp[j.first] -= i;
                mx = max(mx, j.first);
                break;
            }
        }        
    }
    cout << mx << nl;
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
