#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES"<<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    For(i, 0, n) cin >> v[i];
    sort(v.begin(), v.end());
    ll sum = 1;
    bool ok = true;
    For(i,0,n){
        if(v[i] > sum){
            // ok = false;
            NO return;
        }
        if(i > 0)
        sum += v[i];
    }
    YES
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