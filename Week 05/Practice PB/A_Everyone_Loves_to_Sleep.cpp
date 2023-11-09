#include<bits/stdc++.h>
#include <chrono>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
using namespace std;
void calt(int AS,int AE,int a1,int a2)
{
    int sleep = (AS * 60) + AE;
    int alarm = (a1 * 60) + a2;
    if(sleep < alarm)
    {
        int x = alarm - sleep;
        cout << x / 60 << ' ' << x % 60 << nl;
        // cout << "Forward" << nl;
    }
    else
    {
        int x = ((24 * 60) - sleep) + alarm;
        cout << x / 60 << ' ' << x % 60 << nl;
    }
    // cout << AS << ' ' << AE << ' ' << a1 << ' ' << a2 << nl;
}
void solve()
{
    int q, AS, AE;
    cin >> q >> AS >> AE;
    if(AS == 0)
        AS += 24;
    vector<pair<int, int>> v;
    while (q--)
    {
        int a1, a2;
        cin >> a1 >> a2;
        if(a1 == 0)
        {
            a1 += 24;
        }
        v.push_back({a1, a2});
    }
    sort(v.begin(), v.end());
    bool ok = false;
    for(auto i:v)
    {
        if(i.first == AS && i.second == AE)
        {
            cout << 0 << ' ' << 0 << nl;
            ok = true;
            return;
        }
        if(i.first == AS && i.second > AE)
        {
            calt(AS, AE, i.first, i.second);
            ok = true;
            break;
        }
        if(i.first > AS)
        {
            calt(AS, AE, i.first, i.second);
            ok = true;
            break;
        }
    }
    if(!ok)
    {
        calt(AS, AE, v.front().first, v.front().second);
    }
    
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

void solve(){
    int n;
    cin >> n;
    int time, h, m;
    cin >> h >> m;
    time = 60 * h + m;
    int ans = 24 * 60;
    for(int i = 0; i < n; ++i){
        cin >> h >> m;
        int t = 60 * h + m - time;
        if(t < 0) t += 24 * 60;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60;
}