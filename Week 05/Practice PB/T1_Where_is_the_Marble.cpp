#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
using namespace std;
void solve(int t,int q)
{
    vector<int> v(t);
    For(i,0,t)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = t - 1, ans = INT_MAX;
        bool found = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if(v[mid] == x)
            {
                // cout << mid+1 << nl;
                found = true;
                ans = min(ans, mid);
                l = 0;
                r = mid - 1;
            }
            else if(v[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if(found)
        {
            cout << x << " found at " << ans + 1 << nl;
        }
        else
        {
            cout << x << " not found" << nl;
        }
    }
    
}
int main()
{
    int cnt = 1;
    while (true)
    {
        int t, q;
        cin >> t >> q;
        if(t == 0 && q == 0)
        {
            break;
        }
        cout << "CASE#" << ' ' << cnt << ":" << nl;
        solve(t, q);
        cnt++;
    }
    return 0;
}