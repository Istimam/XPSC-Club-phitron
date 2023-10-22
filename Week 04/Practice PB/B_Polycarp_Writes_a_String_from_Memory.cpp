#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int days = 0;
    vector<bool> freq(26, false);
    int cnt = 0;
    For(i,0,s.size())
    {
        if(!freq[s[i] - 'a'])
        {
            // cout << s[i] << ' ';
            freq[s[i] - 'a'] = true;
            cnt++;
            if(cnt > 3)
            {
                // i--;
                days++;
                cnt = cnt - 3;
                freq.assign(26, false);
                freq[s[i] - 'a'] = true;
            }
        }
    }
    if(cnt > 0)
    {
        days++;
        cout << days << '\n';
    }
    else
    cout << days << '\n';
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