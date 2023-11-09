#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n), v2(n), dif(n);
    For(i,0,n)
    {
        cin >> v1[i];
    }
    vector<int> zero;
    For(i,0,n)
    {
        cin >> v2[i];
        dif[i] = v1[i] - v2[i];
        if(v2[i] == 0)
        {
            zero.push_back(v1[i] - v2[i]);
        }
    }
    int mn = INT_MAX;
    For(i,0,n)
    {
        if(v2[i] > 0)
        {
            mn = dif[i];
            break;
        }
    }
    For(i,0,n)
    {
        if(v2[i] == 0)
        {
            continue;
        }
        if(dif[i] < 0)
        {
            cout << "NO" << nl;
            return;
        }
        else if(dif[i] != mn)
        {
            cout << "NO" << nl;
            return;
        }
    }
    if(!zero.empty())
    {
        For(i,0,zero.size())
        {
            if(zero[i] > mn && mn != INT_MAX)
            {
                cout <<"NO" << nl;
                return;
            }
        }
    }
    cout << "YES" << nl;
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