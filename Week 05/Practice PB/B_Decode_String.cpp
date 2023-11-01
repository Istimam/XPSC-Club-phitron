#include<bits/stdc++.h>
#define nl '\n'
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char arr[27];
    int j = 1;
    for (char i = 'a'; i <= 'z'; i++)
    {
        arr[j] = i;
        j++;
    }
    string sss = {};
    int ii = n;
    int cnt = 0;
    while (ii--)
    {
        if (s[ii] == '0' && s.size() > 1)
        {
            
            string x = s.substr(ii-2 , 2);
            int ix = stoi(x);
            sss += arr[ix];
            s.erase(ii - 2, 3);
            ii -= 2;
        }
        else
        {
            char ic = s[ii];
            int ix = ic - '0';
            sss += arr[ix];
        }
    }
    reverse(sss.begin(), sss.end());
    cout << sss << nl;
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