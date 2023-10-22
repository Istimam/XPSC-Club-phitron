#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n, s;
    cin >> n >> s;
    set<int> ss;
    int cnt = 1;
    For(i, 0, n) 
    {
        int x;
        cin >> x;
        cnt++;
        ss.insert(x);
    }
    int x = 0;
    For(i,1,s+1)
    {
        set<int>::iterator fnd = ss.find(i);
        if(fnd == ss.end())
        {
            x += i;
            ss.insert(i);
            if(x >= s)
            {
                break;
            }
        }
        if(x > s)
        {
            break;
        }
    }
    if(ss.size() > n && s == x)
    {
        bool ok = true;
        int maxValue = *ss.rbegin();
        For(i,0,maxValue)
        {
            set<int>::iterator next = ss.find(i + 1);
            if(next == ss.end())
            {
                ok = false;
                break;
            }
        }
        if(ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    else
        cout << "NO" << '\n';
    // for(auto i:ss)
    //     cout << i << " ";
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}