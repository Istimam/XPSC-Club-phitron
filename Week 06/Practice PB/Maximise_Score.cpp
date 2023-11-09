#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i,0,n)
    {
        cin >> v[i];
    }
    int ans = INT_MAX;
    For(i,0,n)
    {
        int sum = 0;
        if(i == 0)
        {
            sum += abs(v[i] - v[i + 1]);
        }
        else if(i == n-1)
        {
            sum += abs(v[i - 1] - v[i]);
        }
        else
        {
            int right = 0, left = 0;
            right += abs(v[i - 1] - v[i]);
            left += abs(v[i] - v[i + 1]);
            sum = max(right, left);
        }
        ans = min(ans, sum);
        // cout << sum << ' ';
    }
    cout << ans <<nl;
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