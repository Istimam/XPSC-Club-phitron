#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char c;
    int A = 0, B = 0;
    if(s[0] == 'A')
    {
        A++;
        c = 'A';
    }   
    else
        c = 'B';
    For(i,1,n)
    {
        if(s[i] == c)
        {
            if(s[i] == 'A')
                A++;
            else
                B++;
        }
        c = s[i];
    }
    cout << A << ' ' << B << nl;
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