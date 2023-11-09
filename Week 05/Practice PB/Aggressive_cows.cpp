#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
bool isValid(int dif,vector<int> v,int n,int c)
{
    int cnt = 1;
    int last = 0;
    For(i,1,n)
    {
        if(abs(v[i]-v[last]) >= dif)
        {
            cnt++;
            last = i;
        }
    }
    return cnt >= c;
}
void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    For(i,0,n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int l = 0, r = INT_MAX;
    int ans;
    while (l<=r)
    {
        int mid = l + (r - l) / 2;
        if(isValid(mid,v,n,c))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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