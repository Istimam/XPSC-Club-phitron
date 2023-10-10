#include <bits/stdc++.h>
#define FOR(i, A, b) for(int i = (A); i < (b); i++)
using namespace std;

void solve()
{
    int n, l;
    cin >> n >> l;
    vector<string> vs(n);
    FOR(i, 0, n)
    {
        cin >> vs[i];
    }
    int mn = INT_MAX;
    FOR(i, 0, n)
    {
        string ss = vs[i];
        FOR(j, 0, n)
        {
            if (i != j)
            {
                string ss2 = vs[j];
                int sum = 0;
                FOR(k, 0, l)
                {
                    sum += abs(ss[k] - ss2[k]);
                }
                mn = min(mn, sum);
            }
        }
    }
    cout << mn << '\n';
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
