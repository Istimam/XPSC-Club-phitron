#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
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
    reverse(v.begin(), v.end());
    set<int> ss;
    For(i,0,n)
    {
        set<int>::iterator fnd = ss.find(v[i]);
        if(fnd != ss.end())
        {
            cout << n - i << '\n';
            return;
        }
        ss.insert(v[i]);
    }
    cout << 0 << '\n';
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