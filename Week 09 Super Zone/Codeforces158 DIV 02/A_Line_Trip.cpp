#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    int dif = 0;
    int minDif = INT_MIN;
    For(i,0,n){
        cin >> v[i];
        int dd = v[i] - dif;
        dif = v[i];
        minDif = max(dd, minDif);
    }
    minDif = max(minDif, 2*(abs(v[n - 1] - d)));
    cout << minDif << nl;
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