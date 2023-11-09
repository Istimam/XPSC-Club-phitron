#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
using namespace std;
bool isInRange(int x, int a, int b) 
{
    return (x >= min(a, b)) && (x <= max(a, b));
}
void solve()
{
    
        string s;
        cin >> s;
        vector<pair<int, int>> vp;
        int sz = s.size();
        For(i,0,sz)
        {
            vp.push_back({s[i]-96, i + 1});
        }
        if(s[0]-96 <= s[sz-1]-96)
        {
            sort(vp.begin() + 1, vp.end());
        }
        else
        {
            sort(vp.begin() + 1, vp.end(), [](pair<int, int> &a, pair<int, int> &b)
             { return a.first > b.first; });
        }
        vector<int> serial;
        int v1 = vp.front().first, sum = 0;
        For(i,0,sz)
        {
            int v2 = vp[i].first;
            if(isInRange(v2,s[0]-96,s[sz-1]-96))
            {
                if(vp[i].second != sz)
                {
                    serial.push_back(vp[i].second);
                }
                sum += abs(v1 - v2);
                v1 = v2;
            }
        }
        serial.push_back(sz);
        cout << sum << ' ' << serial.size() << nl;
        for(auto i:serial)
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