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
    vector<int> a(n), b(n);
    For(i, 0, n) cin >> a[i];
    For(i, 0, n) cin >> b[i];
    int p = 0;
    For(i,0,n){
        while (p < n && a[i] > b[p])
        {
            p++;
        }
        cout << b[p] - a[i] << ' ';
    }
    cout << nl;
    p = n - 1;
    vector<int> ans;
    // ans.push_back(b[n - 1] - a[n - 1]);
    for (int i = n-1; i >= 0; i--)
    {
        ans.push_back(b[p] - a[i]);
        if(a[i] > b[i - 1]){
            p = i - 1;
        }
        // else
        //     ans.push_back(b[p] - a[i]);
    }
    reverse(ans.begin(), ans.end());
    for(auto i:ans)
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