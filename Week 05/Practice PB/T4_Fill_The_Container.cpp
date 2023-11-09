#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve(int n,int c)
{
    vector<int> v(n);
    For(i,0,n)
    {
        cin >> v[i];
    }
    int l = 0, r = INT_MAX;
    int ans;
    while (l <= r)
    {
        int cap = l + (r - l) / 2;
        int container = 1;
        int sum = 0;
        For(i,0,n)
        {
            if(v[i] > cap)
            {
                container = INT_MAX;
                break;
            }
            sum += v[i];
            if(sum > cap)
            {
                container++;
                sum = v[i];
            }
        }
        if(container <= c)
        {
            ans = cap;
            r = cap - 1;
        }
        else
        {
            l = cap + 1;
        }
    }
    cout << ans << nl;
}
int main()
{
    int n, c;
    while (cin>>n>>c)
    {
        solve(n, c);
    }
    return 0;
}