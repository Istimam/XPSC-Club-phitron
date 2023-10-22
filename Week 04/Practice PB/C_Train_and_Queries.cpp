#include <bits/stdc++.h>
#define For(i, A, B) for (int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    map<int, vector<int>> pos;
    For(i, 0, n)
    {
        int x;
        cin >> x;
        pos[x].push_back(i);
    }
    while (q--)
    {
        int s, d;
        cin >> s >> d;
        if(!pos.count(s) || !pos.count(d))
        {
            cout << "NO" << '\n';
            continue;
        }
        int start = pos[s][0];
        if(upper_bound(pos[d].begin(),pos[d].end(),start) == pos[d].end())
        {
            cout << "NO" << '\n';
        }
        else
            cout << "YES" << '\n';
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
