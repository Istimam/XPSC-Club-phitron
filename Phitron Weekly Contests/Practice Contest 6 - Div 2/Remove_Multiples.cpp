#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> v(s);
    set<ll> ss;
    ll ssum = 0;
    For(i,0,s){
        cin >> v[i];
        // ss.insert(v[i]);
        ssum += v[i];
    }
    ll sum = (n * (n + 1)) / 2;
    // int sum = 0;
    // For(i,1,n+1){
    //     if(ss.find(i) == ss.end()){
    //         sum += i;
    //     }
    // }
    cout << sum - ssum << nl;
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