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
    For(i,0,n){
        cin >> v[i];
    }
    if(v[0]!=1){
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