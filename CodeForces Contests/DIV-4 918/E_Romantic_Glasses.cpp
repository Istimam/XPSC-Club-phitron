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
    vector<int> v(n + 1);
    For(i, 0, n) cin >> v[i];
    unordered_map<ll, ll> dif;
    ll es = 0, os = 0;
    bool ans = false;
    For(i,1,n+1){
        if(i&1){
            os += v[i];
        }
        else{
            es += v[i];
        }
        ll curdi = os - es;
        if(curdi==0 ||dif.find(curdi) != dif.end()){
            ans = true;
            break;
        }
        dif[curdi] - i;
    }
    if(ans){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
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