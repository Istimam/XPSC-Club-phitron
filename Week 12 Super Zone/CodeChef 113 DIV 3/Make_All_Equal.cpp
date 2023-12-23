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
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    For(i,1,n){
        int dif = v[i - 1] - v[i];
        ans += dif;
        For(j,0,k){
            if(j+i >= n) break;
            v[j + i] += dif;
        }
    }
    cout << ans << nl;
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