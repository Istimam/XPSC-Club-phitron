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
    vector<string> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    vector<string> vc = v;
    cout << v[0][0];
    // For(i,0,n){
    //     cout << vc[i] << nl;
    // }
    
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