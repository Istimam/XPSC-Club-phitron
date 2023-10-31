#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    For(i,0,n)
    {
        cin >> v[i];
        sum += abs(v[i]);
    }
    bool ok = false;
    int cnt = 0, negSeg = 0;
    For(i,0,n)
    {
        if(v[i] > 0)
        {
            if(cnt > 0)
            {
                negSeg++;
                cnt = 0;
            }
        }
        if(v[i] < 0)
        {
            cnt++;
        }
    }
    if(cnt > 0)
    {
        cout << sum << ' ' << negSeg + 1 << '\n';
    }
    else
        cout << sum << ' ' << negSeg << '\n';

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