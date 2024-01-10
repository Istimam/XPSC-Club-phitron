#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), vv(k);
    For(i, 0, n) cin >> v[i];
    For(i, 0, k) cin >> vv[i];
    vector<bool> q(35, false);
    For(i,0,k){
        if(!q[vv[i]]){
            q[vv[i]] = true;
            ll val = 1 << vv[i];
            For(j,0,n){
                if(v[j]%val == 0){
                    v[j] += (1 << vv[i] - 1);
                }
            }
        }
    }
    for(auto i:v)
        cout << i << ' ';
    cout << NL;
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
