#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string arr[n];
    multiset<string> ms;
    For(i,0,n)
    {
        cin >> arr[i];
        ms.insert(arr[i]);
    }
    For(i,0,n)
    {
        string s = arr[i];
        bool ok = false;
        For(i,1,s.size())
        {
            string s1 = s.substr(0, i);
            string s2 = s.substr(i, s.size());
            // cout << s1 << " " << s2 << '\n';
            multiset<string>::iterator fs1 = ms.find(s1);
            multiset<string>::iterator fs2 = ms.find(s2);
            if(fs1 != ms.end() && fs2 != ms.end())
            {
                ok = true;
                break;
            }
        }
        if(ok)
        {
            cout << 1;
        }
        else
            cout << 0;    
    }
    cout << '\n';
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