#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> psum(n);
    int sum = 0;
    For(i,0,n)
    {
        cin >> v[i];
        sum += v[i];
        psum[i] = sum;
    }
    int partition = INT_MAX;
    vector<pair<int,int>> split;
    For(i,0,n)
    {
        int cnt = 0, s = 0;
        int seg = 0,num=0;
        bool ok = true;
        For(j,0,n)
        {
            s += v[j];
            cnt++;
            if(s == psum[i])
            {
                seg++;
                num = max(cnt, num);
                cnt = 0;
                s = 0;
            }
            if(s > psum[i])
            {
                ok = false;
                break;
            }
            if(j == n-1)
            {
                
            }
        }
        if(ok && s == 0)
            split.push_back({seg, num});
    }
    int mn = INT_MAX;
    sort(split.begin(), split.end());
    // for(auto i:split)
    // {
    //     // if(i.first > 1)
    //     // {
    //     //     cout << i.second << nl;
    //     //     return;
    //     // }
    //     cout << i.first << ' ' << i.second << nl;
    // }
    // cout << n << nl;
    
    // if(split.size() > 1)
    // {
        for(auto i:split)
        {
            mn = min(mn, i.second);
        }
        cout << mn << nl;
    // }
    // else
    //     cout<<
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