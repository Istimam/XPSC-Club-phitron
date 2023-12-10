#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
#define dbg(...) ;
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<ll> v1(n), v2(n);
    ll j = 0, x = (n / 2) + (n % 2);
    for (ll i = 1; i < n; i += 2)
    {
        v1[i] = v[j];
        v2[i] = v[x];
        j++;
        x++;
    }
    ll k = 0;
    for (ll i = 0; i < n; i+= 2)
    {
        v1[i] = v[j];
        v2[i] = v[k];
        j++;
        k++;
    }
    bool ans1 = true, ans2 = true;
    for (ll i = 1; i < n - 1; i ++) {
        if ((v1[i - 1] < v1[i] && v1[i] > v1[i + 1]) || (v1[i - 1] > v1[i] && v1[i] < v1[i + 1])) {
        }
        else{
            ans1 = false;
            break;
        }
    }
    for (ll i = 1; i < n - 1; i ++) {
        if ((v2[i - 1] < v2[i] && v2[i] > v2[i + 1]) || (v2[i - 1] > v2[i] && v2[i] < v2[i + 1])) {
        }
        else{
            ans2 = false;
            break;
        }
    }
    if(ans1){
        for(auto i:v1)
            cout << i << ' ';
    }
    else if(ans2)
    {
        for(auto i:v2)
            cout << i << ' ';
    }
    else{
        cout << -1;
    }
    cout << nl;

    /*Lambda Function*/
    // auto verify = [&](vector<int> &v)
    // {
    //     for (int i = 1; i < n-1; i++)
    //     {
    //         if(v[i] > v[i+1] && v[i] > v[i-1])
    //             continue;
    //         if(v[i] < v[i+1] && v[i] < v[i-1])
    //             continue;
    //         return false;
    //     }
    //     return true;
    // };
    // vector<int> ans = {-1};
    // dbg(v1, v2);
    // if(verify(v1)){
    //     ans = v1;
    // }
    // else if(verify(v2)){
    //     ans = v2;
    // }
    // for(auto it:ans){
    //     cout << it << ' ';
    // }
    // cout << nl;
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