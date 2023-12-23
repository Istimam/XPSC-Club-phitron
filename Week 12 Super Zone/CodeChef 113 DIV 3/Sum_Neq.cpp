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
    vector<int> v(n);
    map<int, int> mp;
    For(i,0,n){
        cin >> v[i];
        mp[v[i]]++;
    }
    if(mp.size() == 1){
        cout << "NO" << nl;
        return;
    }
    if(n == 4){
        cout << ((v[0] + v[1] != v[2] + v[3]) ? "YES" : "NO") << nl;
    }
    else{
        cout << "YES" << nl;
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