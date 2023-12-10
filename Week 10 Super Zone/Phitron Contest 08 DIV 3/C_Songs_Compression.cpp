#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll sum = 0, com = 0;
    vector<ll> dif(n);
    For(i,0,n){
        ll m, c;
        cin >> m >> c;
        sum += m;
        com += c;
        dif[i] = m - c;
    }
    if(k < com){
        cout << -1 << nl;
        return 0;
    }
    sort(dif.begin(), dif.end(), greater<ll>());
    ll cnt = 0;
    for(auto i:dif){
        if(sum <= k)break;
        sum -= i;
        cnt++;
        // cout << i << ' ';
    }
    cout << cnt << nl;
    return 0;
}