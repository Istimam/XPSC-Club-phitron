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
    For(i, 0, n) cin >> v[i];
    sort(v.begin(), v.end());
    int sum = v[0], cnt = 0;
    For(i,1,n){
        if(sum >= v[i]){
            cnt++;
        }
        sum += v[i];

    }
    cout << cnt << nl;
    for(auto i:v)
        cout << i << ' ';
    cout << nl;
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