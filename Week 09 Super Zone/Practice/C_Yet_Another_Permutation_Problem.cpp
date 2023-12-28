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
    vector<int> ans(n);
    int pos = 0;
    for (int i = 1; i <= n; i+=2)
    {
        for (int j = i; j <= n; j*=2)
        {
            ans[pos] = j;
            pos++;
        }
    }       
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