#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    if(is_sorted(v.begin(), v.end())){
        cout << "YES" << nl;
        return;
    }
    if(k == 1){
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;
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