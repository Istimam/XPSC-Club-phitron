#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 'a'; j <= 'z'; j++)
        {
            if(i == j)
            {
                continue;
            }
            n++;
            string x;
            x.push_back(i);
            x.push_back(j);
            if(s == x)
            {
                cout << n << nl;
                break;
            }
        }
        
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